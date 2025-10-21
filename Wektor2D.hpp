class Wektor2D
{
double x, y;

public: Wektor2D(double a, double b) //Konstruktor
    {
        x=a;
        y=b; //stworzy sie wektor po wywolaniu o wspolrzednych x,y = 0,0 po wywolaniu
    }

    Wektor2D() //Konstruktor pusty
    {

    }

void setX(double a) { x = a; } // Settery (ustawiają wartości)
void setY(double b) { y = b; }

double getX() { return x; } // Gettery (zwracają wartości)
double getY() { return y; }
};


Wektor2D operator+(Wektor2D w1, Wektor2D w2) //  Operator + (funkcja wolnostojąca)
{
    return Wektor2D{w1.getX() + w2.getX(), w1.getY() + w2.getY()};
}


double operator*( Wektor2D w1,  Wektor2D w2) //  Operator * (iloczyn skalarny)
{
    return w1.getX() * w2.getX() + w1.getY() * w2.getY();
}
