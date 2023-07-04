kazumori
Kazuma Mori#5425

kurasan — 2023/06/11 15:20
SDカードいる
micro
yattinda — 2023/06/11 15:56
https://github.com/tomorrow56/SPRESENSE_ESP8266
GitHub
GitHub - tomorrow56/SPRESENSE_ESP8266
Contribute to tomorrow56/SPRESENSE_ESP8266 development by creating an account on GitHub.
GitHub - tomorrow56/SPRESENSE_ESP8266
yattinda — 2023/06/11 16:04
確認できたこと
・SPRESENSEの動作
・SPRESENSE＋モニタの動作
・SPRESENSE＋カメラの動作
・SPRESENSE＋WI-FIモジュールの動作
yattinda — 2023/06/11 16:26
https://github.com/TE-YoshinoriOota/Spresense-LowPower-EdgeAI
GitHub
GitHub - TE-YoshinoriOota/Spresense-LowPower-EdgeAI: Sample project...
Sample projects for &quot;Get started Low Power Edge AI with Spresense&quot; - GitHub - TE-YoshinoriOota/Spresense-LowPower-EdgeAI: Sample projects for &quot;Get started Low Power Edge ...
GitHub - TE-YoshinoriOota/Spresense-LowPower-EdgeAI: Sample project...
kurasan — 2023/06/15 11:38
アイデア
起きなかったら鬼通知送る
yattinda — 2023/06/15 12:16
LED * 3
ブレッドボード
凸凸ジャンパー線
スピーカー
マイク
kurasan — 2023/06/15 12:18
画像
画像
画像
Brafuma — 2023/06/18 11:06
イメージ起こした(ラフ)
両腕稼働したほうがいいかもしれんw？
画像
kurasan — 2023/06/21 21:35
https://qiita.com/rnakamuramartiny/items/af55f42f6c4514671555
Qiita
Micropythonを使ってお手軽簡単IoT生活！ - Qiita
本投稿は

Python Advent Calendar 2019　3日目の投稿となります。


Micropython はいいぞー

Raspberry Piはともかくとして
いわゆるESP32系といわれるものは、Wifiがつか...
Micropythonを使ってお手軽簡単IoT生活！ - Qiita
yattinda — 2023/06/21 22:14
https://nayutari.com/python-socket
なゆたり
PythonソケットによるTCP通信入門 – なゆたり
Python 標準の通信ライブラリである socket を活用して、簡易チャットソフトを開発してみます。 チャットソフトを実際に開発していく中で、非同期処理や例外処理、TCP 通...
画像
yattinda — 2023/06/21 22:38
wifi.setOprToStationSoftAP()
Brafuma — 2023/06/21 22:52
テスト用で要る？
画像
Brafuma — 2023/06/22 15:04
画像
画像
画像
kazumori — 2023/06/23 12:06
画像
Brafuma — 2023/06/24 00:43
モーターの駆動部のモデリングした
画像
kurasan — 2023/06/24 16:43
画像
高橋が買ってきたもの
kurasan — 2023/06/24 16:56
もりくんマイク系今度取り来て
kazumori — 2023/06/24 22:23
おっけーい！
Brafuma — 2023/06/25 16:50
これにはA接点とB接点があって、
A接点はボタンを押してない時は導通してなくて、押すと導通する
B接点はボタンを押してない時に導通して、押すと導通しなくなる

非常停止ならB接点で問題ないと思われ
画像
電源付近に接続してマイコンや駆動系の全ての電源供給を停止するか、
駆動系に対する電源供給を停止させるか
どっちが良いんだろう。
Brafuma — 2023/06/25 22:30
ステッピングモータ2個　モータードライバ2個買った！
Brafuma — 2023/06/26 02:07
駆動部のモデリングやり直した
テスト出力してみる
画像
Brafuma — 2023/06/26 10:44
テストプリント完了しました！
画像
Brafuma — 2023/06/26 11:11
組み立てた
一応形にはなったが、遊びを作りすぎてユルユルなのでもう少しキッチリにする
画像
Brafuma — 2023/06/26 14:37
ステッピングモータは別電源が必要なのですが、ちょうど使ってない6V 4Ahの鉛蓄電池があるのでそれを使いたいと思います。

モータ自体はMax12Vくらいまで耐えれたはず。
時間があればAC DCコンバータ使ってコンセントから電源取って常時駆動できるようにしたい気もするけど…
Brafuma — 2023/06/27 19:44
モータードライバ届いた
画像
Brafuma — 2023/06/27 22:00
ピンヘッダ付けておきます
画像
Brafuma — 2023/06/27 22:12
できた
画像
Brafuma — 2023/06/28 14:37
モーター届いた
画像
Brafuma — 2023/06/28 15:12
エンジンのピストン周りの設計から着想を得たので設計図描き直します〜
画像
Brafuma — 2023/06/28 18:05
30×30の角材買いました
画像
kazumori — 2023/06/29 16:26
駆動系のみのほうが良いと思う！
復帰がしやすくなるかと
Brafuma — 2023/06/29 19:26
おっけい
kazumori — 2023/06/30 12:21
ステッピングモータ用テストプログラム！
#include <Stepper.h>  // ライブラリのインクルード
#define PIN1 17  // 青
#define PIN2 16  // ピンク
#define PIN3 15  // 黄
#define PIN4 14  // オレンジ
// ステッピングモーター(出力軸)が1回転するのに必要なステップ数
展開
MotorTestHackathon.ino
3 KB
Brafuma — 2023/07/01 02:15
肩の駆動の設計やり直しました！
ここに至るまで配置や形状の試行錯誤を３回ほどやり直しました
現状でベストな状態だと思ってます
画像
Brafuma — 2023/07/01 02:30
こだわりポイント
画像
Brafuma — 2023/07/01 18:38
画像
Brafuma — 2023/07/01 23:42
仮組み
どうじゃい？いい感じじゃろ
kurasan — 2023/07/02 15:25
良すぎ
Linebotの進捗：
・chatgptベースで受け答えをする女の子のbotを作成
・リッチメニューの「アラームを設定」ボタンを押すと時刻を聞いてくるので入力すると、サーバサイドでその時刻にspresenseに信号を送る関数が実行される。
画像
コードはやっちんのgithubにあげてる。arduinoのコードとかもできてたら、pushしてほしい。
kurasan — 2023/07/02 15:36
ちなみに、spresenseとの通信は未だ苦戦中、、、
kurasan — 2023/07/02 15:46
-バックエンドの使用技術-
言語：python
フレームワーク：flask (今回はDB等を必要としないため選定 )
くらうどさーびす：heroku
静的解析：flake8
LineAPI：messaging api
Brafuma — 昨日 02:04
少し不具合があったので印刷し直します
Brafuma — 昨日 11:21
作り直した！いけそうかも〜
kurasan — 昨日 15:39
最高だ君は
Brafuma — 今日 02:45
外装…
画像
﻿
#include <Stepper.h>  // ライブラリのインクルード
#define PIN1 17  // 青
#define PIN2 16  // ピンク
#define PIN3 15  // 黄
#define PIN4 14  // オレンジ
// ステッピングモーター(出力軸)が1回転するのに必要なステップ数
#define STEP 2048
Stepper stepper1(STEP, PIN1, PIN3, PIN2, PIN4);  // オブジェクトを生成

const int BUTTON_PIN_fast = 6;
const int BUTTON_PIN_slow = 7;

int button;
void hit_fast(){
  stepper1.setSpeed( 15 );  // 1分間当たりの回転数を設定(rpm)
  stepper1.step( 2048 );    // 360°回転させる(2048ステップ)
  stepper1.step( -2048 );    // 360°回転させる(2048ステップ)
  stepper1.step( 2048 );    // 360°回転させる(2048ステップ)
  stepper1.step( -2048 );    // 360°回転させる(2048ステップ)
  digitalWrite(PIN1, LOW);  // 出力を停止(モーターへの電流を止め発熱を防ぐ)
  digitalWrite(PIN2, LOW); 
  digitalWrite(PIN3, LOW); 
  digitalWrite(PIN4, LOW); 
}
void hit_slow(){
  stepper1.setSpeed( 5 );  // 1分間当たりの回転数を設定(rpm)
  stepper1.step( 2048 );    // 360°回転させる(2048ステップ)
  stepper1.step( -2048 );    // 360°回転させる(2048ステップ)
  stepper1.step( 2048 );    // 360°回転させる(2048ステップ)
  stepper1.step( -2048 );    // 360°回転させる(2048ステップ)
  digitalWrite(PIN1, LOW);  // 出力を停止(モーターへの電流を止め発熱を防ぐ)
  digitalWrite(PIN2, LOW); 
  digitalWrite(PIN3, LOW); 
  digitalWrite(PIN4, LOW); 
}

void setup() {
  Serial.begin(115200);       // シリアルポートを初期化
  pinMode( BUTTON_PIN_fast, INPUT );  
  pinMode( BUTTON_PIN_slow, INPUT );  
  pinMode(PIN1, OUTPUT);    // デジタルピンを出力に設定
  pinMode(PIN2, OUTPUT);
  pinMode(PIN3, OUTPUT);
  pinMode(PIN4, OUTPUT);
  delay(500);   // 500ms停止
}
 
void loop() {
  if(BUTTON_PIN_fast == 1){
    hit_fast();
  }else if(BUTTON_PIN_slow == 1){
    hit_slow();
  }
  delay(1000);
}
MotorTestHackathon.ino
3 KB
