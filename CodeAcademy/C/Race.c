#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Structures section
struct Race {
    int numberOfLaps;
    int currentLap;
    char firstPlaceDriveName[20];
    char firstPlaceRaceCarColor[20];
};

struct RaceCar {
    int totalLapTime;
    char driverName[20];
    char raceCarColor[20];
};

// Print functions section
void printIntro() {
    printf("Welcome to our main event digital race fans!\nI hope everybody has their snacks because we are about to\nbegin!\n");
}

void printCountDown() {
    printf("Racers Ready! In...\n5\n4\n3\n2\n1\nRace!");
}

void printFirstPlaceAfterLap(struct Race race) {
    printf("After lap number %d\n", race.currentLap);
    printf("First Place Is: %s in the %s car!\n", race.firstPlaceDriveName, race.firstPlaceRaceCarColor);
}

void printCongratulation() {
    printf("Let's all congratulate Cosmo in the orange race car for an\namazing performance.\nIt truly was a great race, and everybody have a good night!");
}

// Logic functions section
int calcTimeToCompleteLap() {
    int speed = (rand() % 3) + 1;
    int acceleration = (rand() % 3) + 1;
    int nerves = (rand() % 3) + 1;
    int total = speed + acceleration + nerves;

    return total;
}

void updateRaceCar(struct RaceCar *raceCar) {
    raceCar->totalLapTime += calcTimeToCompleteLap();
}

void updateFirstPlace(struct Race *race, struct RaceCar *raceCar1, struct RaceCar *raceCar2) {

    if (raceCar1->totalLapTime < raceCar2->totalLapTime) {
        strcpy(race->firstPlaceDriveName, raceCar1->driverName);
        strcpy(race->firstPlaceRaceCarColor, raceCar1->raceCarColor);
    } else {
        strcpy(race->firstPlaceDriveName, raceCar2->driverName);
        strcpy(race->firstPlaceRaceCarColor, raceCar2->raceCarColor);
    }
}

void startRace(struct Race *race, struct RaceCar *raceCar1, struct RaceCar *raceCar2) {
    race->numberOfLaps = 5;
    race->currentLap = 1; 

    for (int i = race->currentLap; i <= race->numberOfLaps; ++i) {
        updateRaceCar(raceCar1);
        updateRaceCar(raceCar2);
        updateFirstPlace(race, raceCar1, raceCar2);
        printFirstPlaceAfterLap(*race);
        race->currentLap++;
    }

    printCongratulation();
}

int main() {
    srand(time(0));

    struct RaceCar raceCar1 = {0, "George", "Red"};
    struct RaceCar raceCar2 = {0, "John", "Blue"};

    struct Race race;
    printIntro();
    printCountDown();
    startRace(&race, &raceCar1, &raceCar2);

    return 0;
}
