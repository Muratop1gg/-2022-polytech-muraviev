class Complex 
{
public:
  int x;
  int y;
  Complex(int r, int i) : x(r), y(i) {};
  const Complex operator+(const Complex rv) const;
  const Complex operator-(const Complex rv) const;
  const bool operator==(const Complex rv) const;
  const double abs() const;
};
