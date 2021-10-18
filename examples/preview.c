#include <apa102.h>
#include <wiringPi.h>

int main() {
  struct APA102* strip = APA102_Init(60);
  APA102_Begin();
  int i;
  for(i = 0; i < 60; i++) {
    APA102_WriteLED(strip, APA102_CreateFrame(31, 0xFF, 0xFF, 0x00));
  }
  APA102_End();
  
  return 0;
}
