#include <string>
#include <iostream>

int main()
{
    //Task 1
    int growth, weight;
    std::string gender;
    std::cout << "Growth = ";
    std::cin >> growth;


    std::cout << "Weight = ";
    std::cin >> weight;


    std::cout << "Gender = ";
    std::cin >> gender;


    if (gender == "male" || gender == "Male") {
        if (growth - 100 < weight) {
            std::cout << "You need " << (growth - 110) - weight << " kg \n \n";
        }
        else {
            std::cout << "You are okay \n \n";
        }
    }
    else if (gender == "female" || gender == "Female") {
        if (growth - 110 < weight) {
            std::cout << "You need " << (growth - 100) - weight << " kg \n \n";
        }
        else {
            std::cout << "You are okay \n \n";
        }
    }



    //Task 2
    int Number, Month;
    std::cout << "Number and month: ";
    std::cin >> Number >> Month;


    if (Number >= 19 && Number <= 28 && Month == 2 || Number >= 1 && Number <= 20 && Month == 3) {
        std::cout << "Your zodiac sign is Pisces \n";
        std::cout << "In 2022, Aries will face big changes in their lives. It may very well be that you have to move up the career ladder. It is possible that in the romantic plan there will be serious improvements for those who were lonely.\n \n";
    }
    else if (Month == 3 && Number >= 21 && Number <= 31 || Month == 4 && Number >= 1 && Number <= 19) {
        std::cout << "Your zodiac sign is Aries \n";
        std::cout << "The whole of 2022 is the most favorable year for Pisces. This is due to the favorable location of the patron saint of Pisces - the planet Neptune. Your life will improve in most areas, and the effort you need to put in will be minimal.\n \n";
    }
    else if (Month == 4 && Number >= 21 && Number <= 30 || Month == 5 && Number >= 1 && Number <= 20) {
        std::cout << "Your zodiac sign is Taurus \n";
        std::cout << "Taurus will face a rather dynamic life. Moving and traveling is highly likely. These and other circumstances may adversely affect the family life of Taurus, who are accustomed to a stable home life. \n \n";
    }
    else if (Month == 5 && Number >= 21 && Number <= 31 || Month == 6 && Number >= 1 && Number <= 20) {
        std::cout << "Your zodiac sign is Gemini \n";
        std::cout << "Gemini may face the coming year with a load of events and debts from the past. Is it possible to get rid of it? You will have such a chance until April 14, while the Black Moon is in effect. It will allow you to cut off old ties and gain freedom. \n \n";
    }
    else if (Month == 6 && Number >= 21 && Number <= 30 || Month == 7 && Number >= 1 && Number <= 22) {
        std::cout << "Your zodiac sign is cancer \n";
        std::cout << "Cancers are waiting for a very bright, eventful year. You will feel the potential to move mountains, and most importantly, you can actually move them. Of course, this will affect your peace of mind. Vanity is not the best ally for emotional Cancers, but still, sometimes you have to forget about your preferences and completely immerse yourself in business.\n \n";
    }
    else if (Month == 7 && Number >= 23 && Number <= 31 || Month == 8 && Number >= 1 && Number <= 22) {
        std::cout << "Your zodiac sign is leo \n";
        std::cout << "Leos should look at themselves very critically and not demand more attention than they really deserve. The tiger will make sure that the lion does not become conceited. At the first manifestations of arrogance, life will find a way to bring the Lion down from heaven to earth. \n \n";
    }
    else if (Month == 8 && Number >= 23 && Number <= 31 || Month == 9 && Number >= 1 && Number <= 22) {
        std::cout << "Your zodiac sign is Virgo \n";
        std::cout << "Virgo is waiting for a very bright, full of positive events, in many respects a successful year. The Tiger favors the Virgos, and therefore will try to ensure that in any situation everything turns out in your favor.Successand luck are on your side.Therefore, set yourself ambitious goalsand achieve them. \n \n";
    }
    else if (Month == 9 && Number >= 23 && Number <= 30 || Month == 10 && Number >= 1 && Number <= 22) {
        std::cout << "Your zodiac sign is libra \n";
        std::cout << "The year will be closely connected with social interactions. This will create a serious problem. The fact is that unscrupulous people will actively interact with you. They will try to manipulate you in order to achieve their own goals.\n \n";
    }
    else if (Month == 10 && Number >= 23 && Number <= 29 || Month == 11 && Number >= 1 && Number <= 21) {
        std::cout << "Your zodiac sign is scorpio \n";
        std::cout << "This is a great time for Scorpios to cut off old ties and find new paths in life for themselves that no longer require interaction with unpleasant people who have evil intentions.\n \n";
    }
    else if (Month == 11 && Number >= 22 && Number <= 30 || Month == 12 && Number >= 1 && Number <= 21) {
        std::cout << "Your zodiac sign is Sagittarius \n";
        std::cout << "Do not sit still, but do different activities. This will allow you to expand your existing horizons and better understand yourself - your capabilities. The path to achieving even the most unrealistic goals is open before you. It is important to act at full strength and not be afraid of obstacles, because you will successfully overcome them anyway.\n \n";
    }
    else if (Month == 12 && Number >= 22 && Number <= 31 || Month == 1 && Number >= 1 && Number <= 19) {
        std::cout << "Your zodiac sign is capricorn \n";
        std::cout << "Capricorns can now bring plans to their logical conclusion with great success. If you have unfinished business, debts, or some projects that you have begun, then now is the time to take on them to leave it all behind.\n \n";
    }
    else if (Month == 1 && Number >= 20 && Number <= 30 || Month == 2 && Number >= 1 && Number <= 18) {
        std::cout << "Your zodiac sign is aquarius \n";
        std::cout << "The Year of the Tiger will surround Aquarius with a mass of ways for the implementation of certain ideas. But don't let this apparent abundance confuse you. In fact, in your case, there are great chances to spray on a lot of ideas, but not to complete a single one. \n \n";
    }
    else {
        std::cout << "You are nobody...\n \n";
    }



    //Task 3
    int Days, Months, Years;
    std::cout << "Days: ";
    std::cin >> Days;


    std::cout << "Months: ";
    std::cin >> Months;


    std::cout << "Years: ";
    std::cin >> Years;


    if (Months == 1 && Days >= 1 && Days <= 31) {
        std::cout << "Data is correct \n";
        if (Days == 31) {
            std::cout << "01.02." << Years << "\n \n";
        }
        else {
            std::cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 2 && Days >= 1 && Days <= 29) {
        if (Years % 4 == 0 && Days == 29|| Years % 100 == 0 && Years % 400 == 0 && Days == 29) {
            std::cout << "Data is correct \n";
            std::cout << "01.03." << Years << "\n \n";
        }
        else if (Years % 4 != 0 && Days == 29 || Years % 100 != 0 && Days == 29) {
            std::cout << "Data isn't correct \n";
        }
       
        if (Days == 28) { 
            std::cout << "Data is correct \n";
            std::cout << "01.03." << Years << "\n \n";
        }
        else {
            std::cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 3 && Days >= 1 && Days <= 31) {
        std::cout << "Data is correct \n";
        if (Days == 31) {
            std::cout << "01.04." << Years << "\n \n";
        }
        else {
            std::cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 4 && Days >= 1 && Days <= 30) {
        std::cout << "Data is correct \n";
        if (Days == 30) {
            std::cout << "01.05." << Years << "\n \n";
        }
        else {
            std::cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 5 && Days >= 1 && Days <= 31) {
        std::cout << "Data is correct \n";
        if (Days == 31) {
            std::cout << "01.06." << Years << "\n \n";
        }
        else {
            std::cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 6 && Days >= 1 && Days <= 30) {
        std::cout << "Data is correct \n";
        if (Days == 30) {
            std::cout << "01.07." << Years << "\n \n";
        }
        else {
            std::cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 7 && Days >= 1 && Days <= 31) {
        std::cout << "Data is correct \n";
        if (Days == 31) {
            std::cout << "01.08." << Years << "\n \n";
        }
        else {
            std::cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 8 && Days >= 1 && Days <= 31) {
        std::cout << "Data is correct \n";
        if (Days == 31) {
            std::cout << "01.09." << Years << "\n \n";
        }
        else {
            std::cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 9 && Days >= 1 && Days <= 30) {
        std::cout << "Data is correct \n";
        if (Days == 30) {
            std::cout << "01.10." << Years << "\n \n";
        }
        else {
            std::cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 10 && Days >= 1 && Days <= 31) {
        std::cout << "Data is correct \n";
        if (Days == 31) {
            std::cout << "01.11." << Years << "\n \n";
        }
        else {
            std::cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 11 && Days >= 1 && Days <= 30) {
        std::cout << "Data is correct \n";
        if (Days == 30) {
            std::cout << "01.12." << Years << "\n \n";
        }
        else {
            std::cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 12 && Days >= 1 && Days <= 31) {
        std::cout << "Data is correct \n";
        if (Days == 31) {
            std::cout << "01.01." << Years + 1 << "\n \n";
        }
        else {
            std::cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }
        


}

