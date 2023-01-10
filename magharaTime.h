//---------Time defines for the maghara-------------//
// times unit : s
// t1:raye7
//t2: rage3
// s : start
// e : end
//----------- Virgin Mary House Timing--------------// tick
#define mary_house_t1   7 
#define mary_house_t2   7   
//------------Ekttab Timing-------------------------// tick 
#define write_t1        19
#define write_t2        19
//------------bab mzwad kharigy timing -----------------//  
#define nativity_t1     9
#define nativity_t2     9

/*
//----------- 7araket al malak ------- Not USED HARD CODED ISA---------------//
#define angels_t1        7    
#define angels_t2        7
*/
//------------7araket al ngm ------------------------// 
#define star_going_t1    13
#define star_going_t2    52
#define star_back_t1     34
#define star_back_t2     17   // NOT ACCURATE *******
//-------------7araket al magos ---------------------// tick
#define kings_forward_t1  23
#define kings_forward_t2  24

//-------------herodes al malek ---------------
#define herodes_t1    9
#define herodes_t2    9
//----------------mzwad da5elli --------------// 
#define baby_jesus_t1 12
#define baby_jesus_t2 12

// min to sec fun


int timer(){
    unsigned long t=micros();
    return t/1000000  ; 
}


long tsconvert(const char *timestam) {
  unsigned m, s;
  int n = 0;
  int cnt = sscanf(timestam, "%2u:%2u %n", &m, &s, &n);
  //if (cnt != 2 || timestam[n] != '\0') return -1 ; // Format Error;
  //if (h >= 24 || m >= 60 || s >= 60) return -1; // Range Error
  // 0 - 86400-1
  return ((m)*60L + s);
}

void action (int pin , const char *time , int state , int duration =0){
  int sec_start = tsconvert(time);
  int sec_close = tsconvert(time) + duration;

  if(timer() == sec_start){
    digitalWrite(pin , state);
  }
  // if motor will wait duration then close 
  if(timer() == sec_close && duration != 0 ){
  digitalWrite(pin , !state);
  }
}


