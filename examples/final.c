#include <apa102.h>
#include <wiringPi.h>
#include <stdio.h>

int main() {
  struct APA102* strip = APA102_Init(60);
  struct APA102_Frame* color = APA102_CreateFrame(1, 255, 255, 0);
  struct APA102_Frame* color2 = APA102_CreateFrame(1, 0, 255, 255);
  int x;
  for(x = 0; x < 10000000; x++) {
    printf("%d", x);
    APA102_Begin();
    int i;
    for(i = 0; i < 60; i++) {
      APA102_WriteLED(color);
    }
    APA102_End();
    delay(1);
    
    APA102_Begin();
    int j;
    for(j = 0; j < 60; j++) {
      APA102_WriteLED(color2);
    }
    APA102_End();
    delay(1);
  }
  return 0;
}
