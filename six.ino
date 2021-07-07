int a[3]={0};
void setup() {
  // put your setup code here, to run once:
 pinMode(3,OUTPUT);
 pinMode(2,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 digitalWrite(2,LOW);
 digitalWrite(4,0);
 digitalWrite(5,0);
 digitalWrite(3,0);
}

void loop() {
  for(int i = 3;i<6;i++){
    if(a[i-3] == 0){
      digitalWrite(3,3-i);
      digitalWrite(4,4-i);
      digitalWrite(5,5-i);
      
    }else{
      digitalWrite(3,!(3-i));
      digitalWrite(4,!(4-i));
      digitalWrite(5,!(5-i));
    }
    a[i-3] = !a[i-3];
    delay(500);
  }
}
