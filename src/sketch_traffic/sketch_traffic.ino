int Lane1[] = {13, 12, 11}; // Lane 1 Red, Yellow and Green
int Lane2[] = {10, 9, 8}; // Lane 2 Red, Yellow and Green
int Lane3[] = {7, 6, 5}; // Lane 3 Red, Yellow and Green
int Lane4[] = {4, 3, 2}; // Lane 4 Red, Yellow and Green

//Temporary input pin according to lane
int obstaclePin = 0;// This is our input pin
//int obstaclePin2 = 1;// This is our input pin
int hasObstacle = LOW;  // HIGH MEANS NO OBSTACLE
//int hasObstacle2 = HIGH;

void setup()
{
  for (int i = 0; i < 3; i++)
  {
    pinMode(Lane1[i], OUTPUT);
    pinMode(Lane2[i], OUTPUT);
    pinMode(Lane3[i], OUTPUT);
    pinMode(Lane4[i], OUTPUT);
    pinMode(obstaclePin, INPUT);
    //pinMode(obstaclePin2, INPUT);
  }
  /*for (int i = 0; i < 3; i++)
  {
    digitalWrite(Lane1[i], LOW);
    digitalWrite(Lane2[i], LOW);
    digitalWrite(Lane3[i], LOW);
    digitalWrite(Lane4[i], LOW);
  }*/

}

void loop()
{
 hasObstacle = digitalRead(obstaclePin); //Reads the output of the obstacle sensor from the 0th PIN of the Digital section of the arduino
  //hasObstacle2 = digitalRead(obstaclePin2);
  if (hasObstacle == HIGH)//LOW means something is ahead, so illuminates the 13th Port connected LED
  {
    digitalWrite(Lane1[0], LOW);
    digitalWrite(Lane1[2], HIGH);
    digitalWrite(Lane1[1], LOW);
    digitalWrite(Lane2[0], LOW);
    digitalWrite(Lane3[1], LOW);
    digitalWrite(Lane4[2], LOW);
    digitalWrite(Lane3[0], LOW);
    digitalWrite(Lane3[1], LOW);
    digitalWrite(Lane3[2], LOW);
    digitalWrite(Lane4[0], LOW);
    digitalWrite(Lane4[1], LOW);
    digitalWrite(Lane4[2], LOW);
    delay(5000);
  }
  /* else if (hasObstacle2 == LOW && hasObstacle1 == HIGH) //LOW means something is ahead, so illuminates the 13th Port connected LED
    {
     digitalWrite(Lane2[2], HIGH);
     delay(10000);
    }*/
  else {
    //Serial.print("In else");
    digitalWrite(Lane1[2], HIGH);
    digitalWrite(Lane3[0], HIGH);
    digitalWrite(Lane4[0], HIGH);
    digitalWrite(Lane2[0], HIGH);
    delay(7000);
    digitalWrite(Lane1[2], LOW);
    digitalWrite(Lane3[0], LOW);
    digitalWrite(Lane1[1], HIGH);
    digitalWrite(Lane3[1], HIGH);
    delay(3000);
    digitalWrite(Lane1[1], LOW);
    digitalWrite(Lane3[1], LOW);
    digitalWrite(Lane1[0], HIGH);
    digitalWrite(Lane3[2], HIGH);
    delay(7000);
    digitalWrite(Lane3[2], LOW);
    digitalWrite(Lane4[0], LOW);
    digitalWrite(Lane3[1], HIGH);
    digitalWrite(Lane4[1], HIGH);
    delay(3000);
    digitalWrite(Lane3[1], LOW);
    digitalWrite(Lane4[1], LOW);
    digitalWrite(Lane3[0], HIGH);
    digitalWrite(Lane4[2], HIGH);
    delay(7000);
    digitalWrite(Lane4[2], LOW);
    digitalWrite(Lane2[0], LOW);
    digitalWrite(Lane4[1], HIGH);
    digitalWrite(Lane2[1], HIGH);
    delay(3000);
    digitalWrite(Lane4[1], LOW);
    digitalWrite(Lane2[1], LOW);
    digitalWrite(Lane4[0], HIGH);
    digitalWrite(Lane2[2], HIGH);
    delay(7000);
    digitalWrite(Lane1[0], LOW);
    digitalWrite(Lane2[2], LOW);
    digitalWrite(Lane1[1], HIGH);
    digitalWrite(Lane2[1], HIGH);
    delay(3000);
    digitalWrite(Lane2[1], LOW);
    digitalWrite(Lane1[1], LOW);
 }
}
