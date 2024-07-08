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
//     HtmlTags token;
//     std::vec<DomNode*> children;
// };

std::vector<HtmlTags> Tokenizer::ParseString(std::string input) {
    bool readingTag = false;
    std::vector<HtmlTags> tags = std::vector<HtmlTags>();

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
