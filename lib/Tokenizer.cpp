#include "Tokenizer.h"
#include <string>
#include <iostream>
#include <vector>

using namespace HtmlTokenizer;

void Tokenizer::Testing(std::string input) {
    std::cout << input << " ::My Beautiful Message.\n";
}

Tokenizer::Tokenizer() {
    tail = 0;
    head = 0;
}

// Testing for now
// struct DomNode {
//     HtmlTag token;
//     std::vec<DomNode*> children;
// };

std::vector<HtmlTag> Tokenizer::ParseString(std::string input) {
    bool readingTag = false;
    std::vector<HtmlTag> tags = std::vector<HtmlTag>();

    while(this->head < input.length()) {
        if (readingTag) {
            if(input[this->head] == '>') {
                std::cout << input.substr(this->tail, this->head - this->tail + 1) << "\n";
                readingTag = false;
            }

            this->head++;
            continue;
        }

        if(input[this->head] == '<') {
            readingTag = true;
            this->tail = this->head;
        }

        this->head++;
    }

    return tags;
}
