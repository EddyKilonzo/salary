class DivisionByZeroException
{
public:
    void message()
    {
        cout << "Error: Division by zero!" << endl;
    }
};

double divide(double numerator, double denominator)
{
    if (denominator == 0)
    {
        throw DivisionByZeroException();
    }
    return numerator / denominator;
}

int main()
{
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try
    {
        double result = divide(a, b);
        cout << "Result: " << result << endl;
    }
    catch (DivisionByZeroException e)
    {
        e.message();
    }

    return 0;
}