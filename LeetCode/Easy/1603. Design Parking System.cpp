class ParkingSystem {
private:
    int L , M , S ;
public:
    ParkingSystem(int big, int medium, int small) {
        L = big;
        M = medium;
        S = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1 && L > 0) {L--; return 1;}
        else if(carType == 2 && M > 0) {M--; return 1;}
        else if(carType == 3 && S >0) {S--; return 1;}
        return 0;
    }
};
