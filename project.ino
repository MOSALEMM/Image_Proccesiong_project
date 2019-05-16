void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
}
void loop() 
{

  
  if(Serial.available() > 0) {
    
    char data = Serial.read();
    char str[2];
    str[0] = data;
    str[1] = '\0';
        if(str[0] == '1')
        {

            digitalWrite(4 , HIGH);
            digitalWrite(5 , LOW);
            digitalWrite(6 , LOW);
            digitalWrite(7 , LOW);
            digitalWrite(8 , LOW);
        } 

        else if(str[0] == '2')
        {
            digitalWrite(5 , HIGH);
            digitalWrite(4 , LOW);
            digitalWrite(6 , LOW);
            digitalWrite(7 , LOW);
            digitalWrite(8 , LOW);

            

               
        } 

        else if(str[0] == '3')
        {
          
            digitalWrite(6 , HIGH);
            digitalWrite(4 , LOW);
            digitalWrite(5 , LOW);
            digitalWrite(7 , LOW);
            digitalWrite(8 , LOW);

        } 

        else if(str[0] == '4')
        {
          
            digitalWrite(7 , HIGH);
            digitalWrite(5 , LOW);
            digitalWrite(6 , LOW);
            digitalWrite(4 , LOW);
            digitalWrite(8 , LOW);

        } 

        else if(str[0] == '5')
        {

            
            digitalWrite(8 , HIGH);
            digitalWrite(5 , LOW);
            digitalWrite(6 , LOW);
            digitalWrite(7 , LOW);
            digitalWrite(4 , LOW);

        
        }
        else 
        {
            digitalWrite(4 , LOW);
            digitalWrite(5 , LOW);
            digitalWrite(6 , LOW);
            digitalWrite(7 , LOW);
            digitalWrite(8 , LOW); 
        }
        
                              }
   

}
