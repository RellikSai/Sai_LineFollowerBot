/*
Assumptions and Nomenclature:

1)This LineFollowerBot takes 200ms for a Half turn in one direction(approximately 45 degrees)
  and it takes about 400ms for a perfect turn in one direction(approximately 90 degrees) and used accordingly in delay function...
  (This timings was supposed to be measured through practical experiments but this is just a theoritical coding session, i have used these numbers)

2)Every Naming of variables is done just with a visualization of a top view of the Bot
  (i.e., upper means left from the front view)
  (i.e., lower or down means right from the front view)

3)_m = middle one
  _uf = upper first
  _us = upper second (farthest)
  _lf and _ls are similar with 'l' as lower

4)ul = upper left motor 
  ur = upper right motor
  dl = down left motor
  dr = down right motor
*/

int ldr_m = 7;
int ldr_uf = 4;
int ldr_us = 2;
int ldr_lf = 8;
int ldr_ls = 9;
int ul = 10;
int dl = 12;
int ur = 11;
int dr = 13;
const int th = 500;

void setup() {
  pinMode(ldr_m, INPUT);
  pinMode(ldr_uf, INPUT);
  pinMode(ldr_us, INPUT);
  pinMode(ldr_lf, INPUT);
  pinMode(ldr_ls, INPUT);
  pinMode(ul, OUTPUT);
  pinMode(dl, OUTPUT);
  pinMode(ur, OUTPUT);
  pinMode(dr, OUTPUT);
}

void loop() {
  int rldr_m = digitalRead(ldr_m);
  int rldr_uf = digitalRead(ldr_uf);
  int rldr_us = digitalRead(ldr_us);
  int rldr_lf = digitalRead(ldr_lf);
  int rldr_ls = digitalRead(ldr_ls);

  if (rldr_m > th) 
    digitalWrite(rldr_m, HIGH); 
  else 
    digitalWrite(rldr_m, LOW);

  if (rldr_uf > th)
    digitalWrite(rldr_uf, HIGH);
  else 
    digitalWrite(rldr_uf, LOW);

  if (rldr_us > th)
    digitalWrite(rldr_us, HIGH);
  else
    digitalWrite(rldr_us, LOW);

  if (rldr_lf > th)
    digitalWrite(rldr_lf, HIGH);
  else
    digitalWrite(rldr_lf, LOW);

  if (rldr_ls > th)
    digitalWrite(rldr_ls, HIGH);
  else
    digitalWrite(rldr_ls, LOW);

  if((rldr_m == LOW) && (rldr_uf == HIGH) && (rldr_us == HIGH) && (rldr_lf == HIGH) && (rldr_ls == HIGH)) {
    digitalWrite(ul, HIGH);
    digitalWrite(ur, HIGH);
    digitalWrite(dl, HIGH);
    digitalWrite(dr, HIGH);
  }

  else if((rldr_m == HIGH) && (rldr_uf == LOW) && (rldr_us == HIGH) && (rldr_lf == HIGH) && (rldr_ls == HIGH)) {
    digitalWrite(ul, LOW);
    digitalWrite(ur, LOW);
    digitalWrite(dl, HIGH);
    digitalWrite(dr, HIGH);
    delay(200);
  }

  else if((rldr_m == HIGH) && (rldr_uf == HIGH) && (rldr_us == LOW) && (rldr_lf == HIGH) && (rldr_ls == HIGH)) {
    digitalWrite(ul, LOW);
    digitalWrite(ur, LOW);
    digitalWrite(dl, HIGH);
    digitalWrite(dr, HIGH);
    delay(400);
  }

  else if((rldr_m == HIGH) && (rldr_uf == HIGH) && (rldr_us == HIGH) && (rldr_lf == LOW) && (rldr_ls == HIGH)) {
    digitalWrite(ul, HIGH);
    digitalWrite(ur, HIGH);
    digitalWrite(dl, LOW);
    digitalWrite(dr, LOW);
    delay(200);
  }

  else if((rldr_m == HIGH) && (rldr_uf == HIGH) && (rldr_us == HIGH) && (rldr_lf == HIGH) && (rldr_ls == LOW)) {
    digitalWrite(ul, HIGH);
    digitalWrite(ur, HIGH);
    digitalWrite(dl, LOW);
    digitalWrite(dr, LOW);
    delay(400);
  }

  else {
    digitalWrite(dl, LOW);
    digitalWrite(dr, LOW);
    digitalWrite(ul, LOW);
    digitalWrite(ur, LOW);
  }
}
