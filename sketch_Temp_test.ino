//--------------------------------------sensor1-s16
float temp1=0;
float vr1=0;
//--------------------------------------sensor2-s15
float temp2=0;
float vr2=0;
//--------------------------------------sensor3-s14
float temp3=0;
float vr3=0;
//--------------------------------------sensor4-s13
float temp4=0;
float vr4=0;
//--------------------------------------sensor5-s12
float temp5=0;
float vr5=0;
//--------------------------------------sensor6-on the s13
float temp6=0;
float vr6=0;
//--------------------------------------sensor7-s10
float temp7=0;
float vr7=0;
//--------------------------------------sensor8-s11

float temp8=0;
float vr8=0;

float VB=0;
float V1=0;
float V2=0;
float I=0;

void setup() {
 Serial.begin(9600);
  delay(50);}
void loop() {
//----------------------------------------------------------------------------------sensor1
vr1=analogRead(1)*(4.96/1023.0);
if(0.885>vr1){
temp1=((vr1-0.7494)/0.0226);}//-30-0 d.c

else if((2.073>vr1) and (vr1>0.885)){
temp1=((vr1-0.8872)/0.0301);}//0-40 d.c

else if((2.793>vr1) and (vr1>2.074)){
temp1=((vr1-1.4006)/0.0179);}//40-80 d.c

else if(2.793<vr1){
temp1=((vr1-2.1694)/0.008);}//80-120 d.c
Serial.println(temp1);
//----------------------------------------------------------------------------------sensor2
vr2=analogRead(2)*(4.96/1023.0);
if(0.885>vr2){
temp2=((vr2-0.7494)/0.0226);}//-30-0 d.c

else if((2.073>vr2) and (vr2>0.885)){
temp2=((vr2-0.8872)/0.0301);}//0-40 d.c

else if((2.793>vr2) and (vr2>2.074)){
temp2=((vr2-1.4006)/0.0179);}//40-80 d.c

else if(2.793<vr2){
temp2=((vr2-2.1694)/0.008);}//80-120 d.c
Serial.println(temp2);
//----------------------------------------------------------------------------------sensor3
vr3=analogRead(3)*(4.96/1023.0);
if(0.885>vr3){
temp3=((vr3-0.7494)/0.0226);}//-30-0 d.c

else if((2.073>vr3) and (vr3>0.885)){
temp3=((vr3-0.8872)/0.0301);}//0-40 d.c

else if((2.793>vr3) and (vr3>2.074)){
temp3=((vr3-1.4006)/0.0179);}//40-80 d.c

else if(2.793<vr3){
temp3=((vr3-2.1694)/0.008);}//80-120 d.c
Serial.println(temp3);
//----------------------------------------------------------------------------------sensor4
vr4=analogRead(4)*(4.96/1023.0);
if(0.885>vr4){
temp4=((vr4-0.7494)/0.0226);}//-30-0 d.c

else if((2.073>vr4) and (vr4>0.885)){
temp4=((vr4-0.8872)/0.0301);}//0-40 d.c

else if((2.793>vr4) and (vr4>2.074)){
temp4=((vr4-1.4006)/0.0179);}//40-80 d.c

else if(2.793<vr4){
temp4=((vr4-2.1694)/0.008);}//80-120 d.c
Serial.println(temp4);
//----------------------------------------------------------------------------------sensor5
vr5=analogRead(5)*(4.96/1023.0);
if(0.885>vr5){
temp5=((vr5-0.7494)/0.0226);}//-30-0 d.c

else if((2.073>vr5) and (vr5>0.885)){
temp5=((vr5-0.8872)/0.0301);}//0-40 d.c

else if((2.793>vr5) and (vr5>2.074)){
temp5=((vr5-1.4006)/0.0179);}//40-80 d.c

else if(2.793<vr5){
temp5=((vr5-2.1694)/0.008);}//80-120 d.c
Serial.println(temp5);

//----------------------------------------------------------------------------------sensor6
vr6=analogRead(6)*(4.96/1023.0);
if(0.885>vr6){
temp6=((vr6-0.7494)/0.0226);}//-30-0 d.c

else if((2.073>vr6) and (vr6>0.885)){
temp6=((vr6-0.8872)/0.0301);}//0-40 d.c

else if((2.793>vr6) and (vr6>2.074)){
temp6=((vr6-1.4006)/0.0179);}//40-80 d.c

else if(2.793<vr6){
temp6=((vr6-2.1694)/0.008);}//80-120 d.c
Serial.println(temp6);
//-------------------------------------------------------------------------Voltage

VB=analogRead(7)*(4.96/1023.0);
Serial.println(VB);

//--------------------------------------------------------------------------current
V1=analogRead(8)*((4.97/1023.0)*100); ///5)/0.0045)*2);
Serial.println(V1);
/*
//----------------------------------------------------------------------------------sensor7
vr7=analogRead(7)*(4.96/1023.0);
if(0.885>vr7){
temp7=((vr7-0.7494)/0.0226);}//-30-0 d.c

else if((2.073>vr7) and (vr7>0.885)){
temp7=((vr7-0.8872)/0.0301);}//0-40 d.c

else if((2.793>vr7) and (vr7>2.074)){
temp7=((vr7-1.4006)/0.0179);}//40-80 d.c

else if(2.793<vr7){
temp7=((vr7-2.1694)/0.008);}//80-120 d.c
Serial.println(temp7);
//----------------------------------------------------------------------------------sensor8
vr8=analogRead(8)*(4.96/1023.0);
if(0.885>vr8){
temp8=((vr8-0.7494)/0.0226);}//-30-0 d.c

else if((2.073>vr8) and (vr8>0.885)){
temp8=((vr8-0.8872)/0.0301);}//0-40 d.c

else if((2.793>vr8) and (vr8>2.074)){
temp8=((vr8-1.4006)/0.0179);}//40-80 d.c

else if(2.793<vr8){
temp8=((vr8-2.1694)/0.008);}//80-120 d.c
Serial.println(temp8);
*/
  delay(2000);  
}
