#include <IRremote.h>

#define RECV_PIN 13
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup() {
  Serial.begin(9600);
  Serial.println("RADIO ON [" + String(millis()) + "]");
  irrecv.enableIRIn();
}

void loop() {
  irrecv.enableIRIn();
  if(irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
  }
}
