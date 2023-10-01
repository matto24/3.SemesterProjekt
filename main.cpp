
// #include <math.h>
// #include <stdio.h>

// #define S_FREQ 8000 

/*Sample frequency, should be greater thar 2*sineFrequency
If using audio output it has to be the same saple frequency Used there*/


//const float frequency_in_Hertz = 697; /*set output frequency*/
// const float generatorContant1 = cosf(2*M_PI*(frequency_in_Hertz/S_FREQ));
// const float generatorContant2 = sinf(2*M_PI*(frequency_in_Hertz/S_FREQ));


// float GenerateSignal(){
//   static float Register[2]={1,0};
//   static float FeedBack;

//   FeedBack=2*generatorContant1*Register[0]-Register[1];
//   Register[1]=Register[0];  
//   Register[0]=FeedBack;

//   return (generatorContant2*Register[1]);
// }


// int main(void) {
//   /*generate 300 samples*/
//   for (int NumberOfSamples = 300; NumberOfSamples > 0; NumberOfSamples--) 
//     printf("\n%f", GenerateSignal());
//   return 0;
// }


#include <SFML/Audio.hpp>
#include <iostream>
#include <string>
#include <vector>
#include "sound.h"




// void initSounds() {
    
// }

int main() { 
    std::vector<DtmfSound> sounds;

    for(int i=0; i<10; i++) {
        DtmfSound sound(std::to_string(i));
        sounds.push_back(sound);
    }

    int x;
    std::cout << "Insert sound number here ";
    std::cin >> x;

    sounds[x].playSound();

    return 0;
}


