namespace SALES
{
    const int QUARTERS =4;
    class Sales
    {
    private:
        double sales[QUARTERS];
        double averages;
        double max;
        double min;
    public:
        Sales();
        Sales(const double ar[], int n);
        void showSales();
    };
}