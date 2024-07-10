#include <string>
#include <vector>
#include "../lib/Tokenizer.h"

using namespace HtmlTokenizer;

const std::string input = 
    "<div>\n"
    "   <p>\n"
    "       This is the paragraph content. <a href=\"https://www.google.com\">My Link</a>\n"
    "   </p>\n"
    "</div>";

int main() {
    Tokenizer t = Tokenizer();

    std::vector<HtmlTag> nothing = t.ParseString(input);
}
