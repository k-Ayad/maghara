
#include "maghara_headers.h";
#include "magharaTime.h";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
      digitalWrite(LED_BUILTIN,HIGH);    

  // define and init value for all outputs
  for(int i =2 ; i<=9 ; i++)
  {
      pinMode(i,OUTPUT);
      digitalWrite(i,HIGH);    
  }

  for(int i =30 ; i<=62 ; i++)
  {
      pinMode(i,OUTPUT);
      digitalWrite(i,HIGH);    
  }
}

void loop() {
  // ____________________General light
  action(general_light , "00:10" , LOW);

  // ____________________MashHad al 3adra_______________________ 
            // turn general light off
            action(general_light , "01:07" , HIGH);
            // Eda2et bet al 3adra 
            action(mary_house_l , "01:07" , LOW);
            // fat7 bab bet al 3adra 
            action(mary_house_o , "01:07" , LOW , mary_house_t1 );
            // Eda2et malak 
            action(gabriel_l , "01:53" , LOW);
            action(mary_house_l , "01:53" , HIGH);
            // Eda2et al 3adra
            action(mary_house_l , "02:40" , LOW);
            action(gabriel_l , "02:40" , HIGH);
            // Eda2et malak
            action(gabriel_l , "02:45" , LOW);
            action(mary_house_l , "02:45" , HIGH);
            // Eda2et al 3adra
            action(mary_house_l , "02:59" , LOW);
            action(gabriel_l , "02:59" , HIGH);

            // e3'lak bab al 3adra
            action(mary_house_c , "03:15" , LOW , mary_house_t2 );

            // e3'lak eda2et al 3adra
            action(mary_house_l , "03:16" , HIGH);
//_________________________ al ektatab __________________________________
            // Eda2et seer al ektatab
             action(write_l , "03:16" , LOW);
            // 7araket seer al ektatab 
             action(write_o , "04:01" , LOW , write_t1);

            // 2eda2et al fondo2 
             action(hotel_l , "04:37" , LOW);
            // 7araket sa7b al fondo2
             action(hotel_o , "04:40" , LOW ,hotel_t1 );

             // Eda2et mzwad 1 + e3'lak eda2et al akttab + e3'lak eda2et al fondo2 
             action(nativity_l , "05:16" , LOW);
             action(hotel_l , "05:16" , HIGH );
             action(write_l , "05:16" , HIGH);
             
            // rgo3 sa7b al fondo2 + eda2et mzwaad
             action(hotel_c , "05:16" , LOW ,hotel_t2 );
             
             // fat7 bab mzwad 1 + fat7 al shalal 
             action(nativity_o , "05:30" , LOW ,nativity_t1 );      
             action(water , "05:30" , LOW  );      

            
             // e3'lak bab mzwad 1 + e3'lak al shalal + e3'lak eda2et mezwad 1
             action(nativity_c , "06:30" , LOW ,nativity_t2 );      
             action(water , "06:30" , HIGH  );  
             action(nativity_l , "06:30" , HIGH);
            

//_________________________ mashhaad al ro3aah _________________________________
            // fat7 eda2et ro3ah + fire
             action(shephered_l , "06:30" , LOW  );  
             action(fire_l , "06:30" , LOW  );
             action(fire_fan , "06:27" , LOW  );
             
            // zohor al malayka
             action(angels_l , "06:48" , LOW  );
             // ???????????????????????????????????????????? zman zohor al malayka ?????????????????????????????????????
             action(angels_o , "06:48" , LOW  , angels_t1);

             // rogo3 al malayka
             action(angels_c , "07:44" , LOW  , angels_t2);

             // e3'lak eda2et al malayka
             action(angels_l , "07:55" , HIGH  );
 
            // e3'lak eda2et al ro3ah + fire
            action(shephered_l , "08:07" , HIGH  );  
             action(fire_l , "08:07" , HIGH  );
             action(fire_fan , "08:07" , HIGH  );            


//___________________________ mashHad el magoos ____________________________________

            // Eda2et w 7araket 2asr al magoos
             action(kings_rotate , "08:21" , LOW  );            
             action(kings_l , "08:21" , LOW  );            

            // eda2et negm 
             action(star_l , "09:01" , LOW  );

             // e3'lak eda2et w 7araket magos w bdayet 7araket al negm 
              action(kings_rotate , "09:48" , HIGH  );            
              action(kings_l , "09:48" , HIGH  ); 
              action(star_o , "09:51" ,  LOW ,star_going_t1 ); 

              // eda2et seer al magoos + bdayet 7araket al magos
              action(kings_forward_o , "10:00" ,  LOW , kings_forward_t1 ); 
              action(kings_forward_l , "10:03" ,  LOW ); 

              // eda2et 2asr herodes , e3'lak eda2et ser al magos 
              action(kings_forward_l , "11:00" ,  HIGH ); 
              action(herodes_l , "11:00" ,  LOW ); 

              // fat7 2asr herodes
              action(herodes_o , "11:20" ,  LOW , herodes_t1 ); 

              // e3'lak 2asr herodes 
              action(herodes_c , "12:50" ,  LOW , herodes_t2 );

              // e3'lak eda2et 2asr herodes
              action(herodes_l , "13:00" ,  HIGH );
              
//__________________ Finaaaaaaal _______________________________
              // negm >>> bet al sabby 
              action(star_c , "12:50" ,  LOW , star_back_t1 );
              action(star_l , "13:00" ,  LOW );

            // eda2et al negm + al shalal
              action(star_l , "13:15" ,  LOW );
              action(water , "13:15" ,  LOW );

            // 7araket al magos rage3 + eda2a
              action(kings_reverse_l , "13:20" ,  LOW );
              action(kings_reverse_o , "13:20" ,  LOW , kings_reverse_t1 );
            
            // eda2et bet al sabby + fat7 bab bet al saby 
              action(baby_jesus_o , "13:25" ,  LOW , baby_jesus_t1 );
              action(baby_jesus_l , "13:25" ,  LOW );


// ___________________ Back to init positions ________________
              
            // rgo3 bet al sabby 
           action(baby_jesus_c , "14:20" ,  LOW , baby_jesus_t2 );

            // rgo3 ser al magoos 
              action(kings_reverse_c , "14:20" ,  LOW , kings_reverse_t2 );
              action(kings_forward_c , "14:20" ,  LOW , kings_forward_t2 ); 

            // rgo3 al negm 
              action(star_c , "12:50" ,  LOW , star_back_t2 );

            
}






