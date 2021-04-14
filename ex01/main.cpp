#include "span.hpp"

void display_storage(std::vector<int> v){
    std::cout << "Storage: ";
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout," "));
    std::cout << std::endl;
}

int main(){
    std::cout << "Test from subject:" << std::endl;
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;


    std::cout << std::endl << "Other tests:" << std::endl;
    Span span = Span(3);
    try{
        span.addNumber(5);
        span.addNumber(8);
        span.addNumber(-4);
//        span.addNumber(-10);
    }
    catch (Span::NoSpaceException const & ex){
       std::cout << ex.what() << std::endl;
    }
    try{
        int min_sp = span.shortestSpan();
        std::cout << "The shortest span is " << min_sp << std::endl;
    }
    catch (Span::NoEnoughElementsException const &ex){
        std::cout << ex.what() << std::endl;
    }
    try{
        int max_sp = span.longestSpan();
        std::cout << "The longest span is " << max_sp << std::endl;
    }
    catch (Span::NoEnoughElementsException const &ex){
        std::cout << ex.what() << std::endl;
    }


    std::cout << std::endl;
    Span span_2 = Span(10001);
    std::vector<int> v;
    for (int i = 0; i < 10200; i++){
        v.push_back(i);
    }
    try{
        span_2.addNumber(v.begin(), v.end());
    }
    catch (Span::NoSpaceException const & ex){
        std::cout << ex.what() << std::endl;
    }
//    display_storage(span_2.GetVect());
    try{
        int min_sp_2 = span_2.shortestSpan();
        std::cout << "The shortest span is " << min_sp_2 << std::endl;
    }
    catch (Span::NoEnoughElementsException const &ex){
        std::cout << ex.what() << std::endl;
    }
    try{
        int max_sp_2 = span_2.longestSpan();
        std::cout << "The longest span is " << max_sp_2 << std::endl;
    }
    catch (Span::NoEnoughElementsException const &ex){
        std::cout << ex.what() << std::endl;
    }

    return 0;
};
 
