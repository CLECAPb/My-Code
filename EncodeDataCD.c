#include <stdlib.h>


const char *encode_cd(unsigned char n) {
    int j = 0;
    char *PitLandMass = malloc(10);
    char letter = 'P';
    PitLandMass[j++] = letter;
  for(int i = 0; i < 8; i++)
    {
      if(n % 2 == 1){
        if(letter == 'P') 
        {
          letter = 'L';
        }
        else 
        {
          letter = 'P';
        }
        PitLandMass[j++] = letter;
      }
      else 
      {
        PitLandMass[j++] = letter;
      }
      n /= 2;
    }
    PitLandMass[9] = '\0';
    return &PitLandMass[0];
}
