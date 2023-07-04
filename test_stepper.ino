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
