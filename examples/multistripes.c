/*
  multistripes.c: example which creates differently colored stripes on the strip
*/

#include <apa102.h>
#include <stdio.h>

int main() {
  //Initialize strip
  struct APA102* strip = APA102_Init(60);

  //Create the colors array (must be NULL-terminated)
  struct APA102_Frame* colors[5];

  colors[0] = APA102_CreateFrame(1, 0xFF, 0x0, 0x0);
  colors[1] = APA102_CreateFrame(1, 0xFF, 0xFF, 0x0);
  colors[2] = APA102_CreateFrame(1, 0x00, 0xFF, 0x0);
  colors[3] = APA102_CreateFrame(1, 0x00, 0xFF, 0xFF);
  colors[4] = 0;

  struct APA102_Frame* colors2[5];

  colors2[0] = APA102_CreateFrame(1, 0xFF, 0xFF, 0x0);
  colors2[1] = APA102_CreateFrame(1, 0xFF, 0x0, 0x0);
  colors2[2] = APA102_CreateFrame(1, 0x00, 0x0, 0x0);
  colors2[3] = APA102_CreateFrame(1, 0xFF, 0xFF, 0xFF);
  colors2[4] = 0;
  
  //Fill strip
  int x;
  int z=0;
  for(x = 0; x < 10000000; x++) {
    z++;
    if (z==90){
      printf("YESSS \n");
      z=0;
    }
    APA102_MultiStripes(strip, colors,  60, 0, 0, 0);
    //APA102_MultiStripes(strip, colors2, 4, 2, 0, 0);
  }
}
