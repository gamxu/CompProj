#include <iostream>
#include <cmath>

using namespace std;

void CalParentheses(int N1, int N2, char Sym, double &sum)
{
    switch (Sym)
    {
    case '+':
        sum = N1 + N2;
        break;

    case '-':
        sum = N1 - N2;
        break;

    case '*':
        sum = N1 * N2;
        break;

    case '/':
        sum = N1 / N2;
        break;

    default:
        break;
    }
}

double Parentheses()
{
    char symbol;
    int N = 2;
    double parentheses[N], Sum[N], Ans;
    int N1[N], N2[N];
    char Sym[N];
    string say;
    do
    {
        for (int i = 0; i < N; i++)
        {
            cout << "Parentheses " << i + 1 << " : ";
            cin >> N1[i] >> Sym[i] >> N2[i];
        }
        cout << "What do you want to do with the Two parentheses ? : ";
        cin >> symbol;
        for (int i = 0; i < N; i++)
        {
            cout << "(" << N1[i] << " " << Sym[i] << " " << N2[i] << ")";
            if (i == 0)
            {
                cout << symbol;
            }
        }
        cout << "Do you think this way ? [Y|N] : ";
        cin >> say;
    } while (say == "N" || say == "n");
    for (int i = 0; i < N; i++)
    {
        CalParentheses(N1[i], N2[i], Sym[i], Sum[i]);
    }
    CalParentheses(Sum[0], Sum[1], symbol, Ans);
    return Ans;
}

int main()
{
    double sum;
    char symbol;
    int a, b, c;
    string SumParentheses;
    while (sum != 24)
    {
        cout << "Do you want to use parentheses? [Y|N] : ";
        cin >> SumParentheses;
        if (SumParentheses == "Y" || SumParentheses == "y")
        {
            sum = Parentheses();
        }
        if (SumParentheses == "N" || SumParentheses == "n")
        {
            cout << "first : ";
            cin >> a >> symbol >> b;
            switch (symbol)
            {
            case '+':
                sum = a + b;
                break;

            case '-':
                sum = a - b;
                break;

            case '*':
                sum = a * b;
                break;

            case '/':
                sum = a / b;
                break;

            default:
                break;
            }
            int i = 0;
            while (i < 2)
            {
                cout << "Next : " << sum;
                cin >> symbol >> c;
                switch (symbol)
                {
                case '+':
                    sum += c;
                    break;

                case '-':
                    sum -= c;
                    break;

                case '*':
                    sum *= c;
                    break;

                case '/':
                    sum /= c;
                    break;

                default:
                    break;
                }
                i++;
            }
            if (sum != 24)
            {
                cout << "\n-----Not correct-----\n";
            }
        }
    }
    if (sum == 24)
    {
        cout << "\n-----correct-----";
    }

    return 0;
}