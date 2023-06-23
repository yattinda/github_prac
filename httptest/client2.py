import time
import random
import socket

# サーバーマシンへの接続設定
server_ip = "127.0.0.1"    #サーバーのIPアドレス
server_port = 8080    #サーバーのポート番号

# サーバーマシンのソケット接続
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
sock.connect((server_ip, server_port))

def send_data():
    while True:
        #送信するデータの準備
        data = random.randint(0, 10000000)    #今回送信するデータ（0〜10000000の整数とする）
        print(data)
        data_bytes = data.to_bytes(4, byteorder="big")    #数値をバイト列に変換（4バイト/32ビットの長さでエンコード）

        #データサイズを先に送信（受信側が適切なバッファサイズを確保するため）
        data_size = len(data_bytes)
        sock.sendall(data_size.to_bytes(4, byteorder="big")) 
        
        #データを送信
        sock.sendall(data_bytes)    

        #適当な時間スリープ。（これは必須ではないです）
        time.sleep(random.uniform(0.0, 5.0)) 

try:
    send_data()
except KeyboardInterrupt:
    print("Stopping data transmission...")
finally:
    sock.close()