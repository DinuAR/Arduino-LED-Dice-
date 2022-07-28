//IM/2019/085
//Ariyasena T P D N
int count = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(8) == HIGH && count <= 7)
  {
    count++;
    delay(200);
  }

  for (int i = 2; i <= count; i++)
  {
    digitalWrite(i, HIGH);
  }

  if (count > 6)
  {
    count = 0;
    for (int i = 2; i < 8; i++)
    {
      digitalWrite(i, LOW);
    }
    count++;
  }

}
