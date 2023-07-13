#include <Stepper.h>
// モーターの1回転ステップ数（ST-42BYH1004の場合）
int around_step = 400;
// ボタンを一回を押して進むステップ数
// 正転：10、反転：-10
int step = 1;
// 回転スピード（10：遅い、50：早い）
int speed_slow = 25;
int speed_fast = 130;
//回転角度
// int rotate_step = 1200;
int rotate_step = 900;
int sw_pin = 3;   // スイッチの入力Pin
int rasp_pin = 2;   // スイッチの入力Pin
int led_pin = 7;  // LEDの出力Pin
volatile int sw;  // SWの状態

// stepper インスタンス生成
Stepper stepper(around_step, 8, 9, 10, 11);

void hit_fast() {
  stepper.setSpeed(speed_fast);  // 1分間当たりの回転数を設定(rpm)
  stepper.step(rotate_step);            
  stepper.step(-rotate_step);           
  stepper.step(rotate_step); 
  stepper.step(-rotate_step);           
  digitalWrite(8, LOW);  // 出力を停止(モーターへの電流を止め発熱を防ぐ)
  digitalWrite(9, LOW); 
  digitalWrite(10, LOW); 
  digitalWrite(11, LOW); 
}
void hit_fast_once() {
  stepper.setSpeed(speed_fast);  // 1分間当たりの回転数を設定(rpm)
  stepper.step(rotate_step);            
  stepper.step(-rotate_step);           
  digitalWrite(8, LOW);  // 出力を停止(モーターへの電流を止め発熱を防ぐ)
  digitalWrite(9, LOW); 
  digitalWrite(10, LOW); 
  digitalWrite(11, LOW); 
}


void hit_slow() {
  stepper.setSpeed(speed_slow);  // 1分間当たりの回転数を設定(rpm)
  stepper.step(rotate_step);            
  stepper.step(-rotate_step);           
  stepper.step(rotate_step);            
  stepper.step(-rotate_step);      
  digitalWrite(8, LOW);  // 出力を停止(モーターへの電流を止め発熱を防ぐ)
  digitalWrite(9, LOW); 
  digitalWrite(10, LOW); 
  digitalWrite(11, LOW);      
}

void setup() {
  Serial.begin(115200);  // シリアルポートを初期化
  pinMode(sw_pin, INPUT);
  pinMode(rasp_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  Serial.println("hello");
}

int rasp_sw = 0;
void loop() {
  rasp_sw = digitalRead(rasp_pin);
  // rasp_sw = digitalRead(sw_pin);
  Serial.print("---");
  Serial.println(rasp_sw);
  if (rasp_sw == 1) {
  // if (rasp_sw != 1) {
    Serial.print("++");
    Serial.println(rasp_sw);
    hit_fast_once();
    rasp_sw = 0;
    Serial.print("++==");
    Serial.println(rasp_sw);
  }
  // delay(100);
}