#include <apa102.h>
#include <wiringPi.h>

int main() {
  struct APA102* strip = APA102_Init(60);
  int x;
  for(x = 0; x < 1000; i++) {
    APA102_Begin();
    int i;
    for(i = 0; i < 60; i++) {
      APA102_WriteLED(strip, APA102_CreateFrame(10, 255, 255, 0));
    }
    APA102_End();
    delay(5);
    
    APA102_Begin();
    int i;
    for(i = 0; i < 60; i++) {
      APA102_WriteLED(strip, APA102_CreateFrame(10, 0, 255, 255));
    }
    APA102_End();
    delay(5)
  }
  return 0;
}
