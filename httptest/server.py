import socket
import threading

#ソケットサーバーの設定
server_ip = "127.0.0.1"    #サーバーのIPアドレス
server_port = 8080    #サーバーのポート番号

# クライアントとの通信を行う関数
def handle_client(conn, addr):
    #クライアントからの接続があったことをログに出力
    print("Connected by", addr)

    def receive_data():
        #受信するデータのバイト数を受信
        data_size_bytes = conn.recv(4)
        if not data_size_bytes:
            return None
        
        #受信するデータのバイト数を整数に変換
        data_size = int.from_bytes(data_size_bytes, byteorder="big")

        received_data_bytes = b""    #空のバイト列を生成
        while len(received_data_bytes) < data_size:
            #受信するデータをバイト列で受信し、結合していく
            chunk = conn.recv(data_size - len(received_data_bytes))
            if not chunk:
                return None
            received_data_bytes += chunk
        
        #受信したデータを整数に変換
        received_data = int.from_bytes(received_data_bytes, byteorder='big')
        return received_data

    try:
        while True:
            #データの受信を行い、受信したデータをログに出力
            received_data = receive_data()
            if received_data is None:
                #クライアントから切断されたことをログに出力
                print("Connection closed by", addr)
                break
            print(received_data, f"(from {addr[0]})")
    finally:
        #クライアントとの接続をクローズ
        conn.close()

# ソケットサーバーを作成し、クライアントからの接続を待機
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)    #IPv4とTCPを使用するソケットを作成
sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)    #サーバーソケットのIPアドレスを再利用できるように設定
sock.bind((server_ip, server_port))     #ソケットにIPアドレスとポート番号をバインド
sock.listen(3)  #クライアントからの接続を待ち受ける。キュー（接続待ち状態にあるクライアントの数）を3に設定した。

print("Waiting for connection...")

try:
    while True:
        # クライアントからの接続を待ち、接続されたら新しいスレッドを作成してクライアントとの通信を開始
        conn, addr = sock.accept()
        client_thread = threading.Thread(target=handle_client, args=(conn, addr), daemon=True)
        client_thread.start()
except KeyboardInterrupt:
    print("Shutting down the server...")
finally:
    sock.close()