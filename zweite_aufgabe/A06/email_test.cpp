#include <iostream>
#include <string>
#include <cassert>
#include "email.hpp"

int main()
{

    std::string good1 ("abc@x.com");
    std::string good2 ("xyz@asdf.asdf");
    std::string good3 ("a@b.c");
    std::string good4 ("ptraunfeld@elon.edu");
    std::string good5 ("computer@sci.ence");
    std::string good6 ("foo@bar.baz");
    std::string good7 ("santa@north.pole");
    std::string good8 ("good@email.8");
    std::string good9 ("-@-.-");
    std::string good10 ("the@last.email");
    
    std::string bad1 ("!@#$%%^#");
    std::string bad2 ("almost@good@email.com");
    std::string bad3 ("not#$!@good%$^&$%^email");
    std::string bad4 ("john@.com");
    std::string bad5 ("@something.something");
    std::string bad6 ("spongebob@squarepants.");
    std::string bad7 ("almostdone.email");
    std::string bad8 ("just@a@few@more.com");
    std::string bad9 ("asdfa.asdf@asdf");
    std::string bad10 ("(finally)12345");
    
    assert(is_email(good1) == true);
    assert(is_email(good2) == true);
    assert(is_email(good3) == true);
    assert(is_email(good4) == true);
    assert(is_email(good5) == true);
    assert(is_email(good6) == true);
    assert(is_email(good7) == true);
    assert(is_email(good8) == true);
    assert(is_email(good9) == true);
    assert(is_email(good10) == true);
    
    assert(is_email(bad1) == false);
    assert(is_email(bad2) == false);
    assert(is_email(bad3) == false);
    assert(is_email(bad4) == false);
    assert(is_email(bad5) == false);
    assert(is_email(bad6) == false);
    assert(is_email(bad7) == false);
    assert(is_email(bad8) == false);
    assert(is_email(bad9) == false);
    assert(is_email(bad10) == false);
    
    std::cout << "Alle Tests erfolgreich." << std::endl;
}
