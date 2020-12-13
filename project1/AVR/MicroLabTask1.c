#include <mega16.h>
#include <delay.h>

// Declare your global variables here
#define LED0 PORTB.0
#define LED1 PORTB.1
#define LED2 PORTB.2
#define LED3 PORTB.3
#define LED4 PORTB.4
#define LED5 PORTB.5
#define LED6 PORTB.6
#define LED7 PORTB.7

#define ON 1
#define OFF 0

void main(void)
{
    DDRA = 0x00;   
    PINA = 0x00;  
    DDRB = 0xff;  
    PORTB = 0x00;
    #asm("sei")

    while (1) {  
            if(PINA.0==1)    
            {  
                LED0 = ON;
                delay_ms(30);
                LED0 = OFF;
                
                LED1 = ON;
                delay_ms(30);
                LED1 = OFF;    
                
                LED2 = ON;
                delay_ms(30);
                LED2 = OFF;         
                
                LED3 = ON;
                delay_ms(30);
                LED3 = OFF;     
                
                LED4 = ON;
                delay_ms(30);
                LED4 = OFF;     
                
                LED5 = ON;
                delay_ms(30);
                LED5 = OFF;       
                
                LED6 = ON;
                delay_ms(30);
                LED6 = OFF;        
                
                LED7 = ON;
                delay_ms(30);
                LED7 = OFF;      
                
                LED6 = ON;
                delay_ms(30);
                LED6 = OFF; 
                        
                LED5 = ON;
                delay_ms(30);
                LED5 = OFF; 
                
                LED4 = ON;
                delay_ms(30);
                LED4 = OFF;  
                
                LED3 = ON;
                delay_ms(30);
                LED3 = OFF;    
                
                LED2 = ON;
                delay_ms(30);
                LED2 = OFF; 
                
                LED1 = ON;
                delay_ms(30);
                LED1 = OFF;
                
                LED0 = ON;
                delay_ms(30);
                LED0 = OFF;
            } else {
                PORTB = 00000000;
            }
    }
}