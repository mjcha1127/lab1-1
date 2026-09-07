#include <iostream>

int main()
{
    int score{};
    char grade{};
    std::cout<<"Enter score: ";
    std::cin >> score;
    switch(score/10)
        {
            case 10:
            case 9: grade='A'; break;
            case 8: grade='A'; break;
            case 7: grade='A'; break;
            case 6: grade='A'; break;
            default: grade='F';

        }std::cout<<score<<","<<grade<<std::endl;
    )

    //std::cout<<numofstudents++ <<std::endl;
    //std::cout<<numofstudents<<std::endl;
    //std::cout<<++numofstudents <<std::endl;
    //std::cout<<numofstudents<<std::endl;

    //std::cout <<"Enter the number od students: ";
    //std::cin >>numofstudents;

    //std::cout<<typeid(static_cast<double>(numofstudents)).name()<<std::endl;
    //std::cout<<numofstudents<<std::endl;
    //std::cout<<sizeof(numofstudents)<< std::endl;
    //std::cout<<typeid(numofstudents).name()<<std::endl;

    return 0;
}