boolean okButtonWasTouched = true;
int pin;

void turnLedOn(int pin) {
 pin=2;
    if (okButtonWasTouched) {
        okButtonWasTouched = false;
        pinMode(pin, OUTPUT);
        digitalWrite(2, LOW);
    } else if (!okButtonWasTouched) {
        okButtonWasTouched = true;
        digitalWrite(2, HIGH);

    }

}

void turnLedOn3(int pin) {
 pin=2;
    if (okButtonWasTouched) {
        okButtonWasTouched = false;
        pinMode(pin, OUTPUT);
        digitalWrite(4, LOW);
    } else if (!okButtonWasTouched) {
        okButtonWasTouched = true;
        digitalWrite(4, HIGH);
    }
}



