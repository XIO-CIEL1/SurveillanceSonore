#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup()
 {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() 
{
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) 
{
  return x + y;
}
void setup() {
  // Initialiser la communication série avec un débit de 115200 bauds
  Serial.begin(115200);
  
  // Attendre que la connexion série soit prête
  while (!Serial) 
  {
    ; // Attendre
  }
  
  // Afficher un message sur le port série
  Serial.println("Hello, ESP32!");
}

void loop() 
{
  // Le code dans la boucle est exécuté en continu
  // Vous pouvez ajouter des instructions supplémentaires ici si nécessaire
}
