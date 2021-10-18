#include <apa102.h>
#include <wiringPi.h>

int main() {
  struct APA102* strip = APA102_Init(60);
  struct APA102_Frame* color = APA102_CreateFrame(31, 255, 255, 0);
  APA102_Begin();
  int i;
  for(i = 0; i < 60; i++) {
    APA102_WriteLED(color);
  }
  APA102_End();
  
  return 0;
}
