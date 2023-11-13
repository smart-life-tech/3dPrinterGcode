// Sample Arduino Code

enum Button
{
    AutoHome = 7,
    AxisUp = 11,
    AxisDown = 4,
    AxisLeft = 2,
    AxisRight = 3,
    AxisZUp = 5,
    AxisZDown = 6,
    Preheat = 9,
    Extrude = 8,
    PausePrint = 10
};

const int buttonPins[] = {AutoHome, AxisUp, AxisDown, AxisLeft, AxisRight, AxisZUp, AxisZDown, Preheat, Extrude, PausePrint};
const char *gcodeCommands[] = {
    "G28",                                                       // Auto Home
    "G1 Y10 F3000",                                              // Move Y axis Up
    "G1 Y-10 F3000",                                             // Move Y axis Down
    "G1 X-10 F3000",                                             // Move X Axis Left
    "G1 X10 F3000",                                              // Move X Axis Right
    "G1 Z10 F3000",                                              // Move Z axis Up
    "G1 Z-10 F3000",                                             // Move Z axis Down
    "M140 S60\nM105\nM190 S60\nM104 S210\nM105\nM109 S200\nM82", // Preheat
    "G1 E10 F100",                                               // Extrude Filament
    "M226"                                                       // Pause Print
};

void setup()
{
    for (int i = 0; i < 10; i++)
    {
        pinMode(buttonPins[i], INPUT_PULLUP);
    }
    Serial.begin(9600);
}

void loop()
{
    for (int i = 0; i < 10; i++)
    {
        if (digitalRead(buttonPins[i]) == LOW)
        {
            Serial.println(gcodeCommands[i]);
        }
    }
    delay(100); // Adjust delay as needed
}
