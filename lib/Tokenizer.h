#ifndef HTML_TOKENIZER_TOKENIZER
#define HTML_TOKENIZER_TOKENIZER

#include <string>
#include <vector>

namespace HtmlTokenizer {

enum HtmlTag {
    HT_TAG_HTML = 0,
    HT_TAG_HEAD,
    HT_TAG_TITLE,
    HT_TAG_BASE,
    HT_TAG_LINK,
    HT_TAG_META,
    HT_TAG_STYLE,
    HT_TAG_SCRIPT,
    HT_TAG_NOSCRIPT,
    HT_TAG_BODY,
    HT_TAG_SECTION,
    HT_TAG_NAV,
    HT_TAG_ARTICLE,
    HT_TAG_ASIDE,
    HT_TAG_H1,
    HT_TAG_H2,
    HT_TAG_H3,
    HT_TAG_H4,
    HT_TAG_H5,
    HT_TAG_H6,
    HT_TAG_HGROUP,
    HT_TAG_HEADER,
    HT_TAG_FOOTER,
    HT_TAG_ADDRESS,
    HT_TAG_P,
    HT_TAG_HR,
    HT_TAG_PRE,
    HT_TAG_BLOCKQUOTE,
    HT_TAG_OL,
    HT_TAG_UL,
    HT_TAG_LI,
    HT_TAG_DL,
    HT_TAG_DT,
    HT_TAG_DD,
    HT_TAG_FIGURE,
    HT_TAG_FIGCAPTION,
    HT_TAG_DIV,
    HT_TAG_A,
    HT_TAG_EM,
    HT_TAG_STRONG,
    HT_TAG_SMALL,
    HT_TAG_S,
    HT_TAG_CITE,
    HT_TAG_Q,
    HT_TAG_DFN,
    HT_TAG_ABBR,
    HT_TAG_TIME,
    HT_TAG_CODE,
    HT_TAG_VAR,
    HT_TAG_SAMP,
    HT_TAG_KBD,
    HT_TAG_SUB,
    HT_TAG_SUP,
    HT_TAG_I,
    HT_TAG_B,
    HT_TAG_MARK,
    HT_TAG_RUBY,
    HT_TAG_RT,
    HT_TAG_RP,
    HT_TAG_BDI,
    HT_TAG_BDO,
    HT_TAG_SPAN,
    HT_TAG_BR,
    HT_TAG_WBR,
    HT_TAG_INS,
    HT_TAG_DEL,
    HT_TAG_IMG,
    HT_TAG_IFRAME,
    HT_TAG_EMBED,
    HT_TAG_OBJECT,
    HT_TAG_PARAM,
    HT_TAG_VIDEO,
    HT_TAG_AUDIO,
    HT_TAG_SOURCE,
    HT_TAG_TRACK,
    HT_TAG_CANVAS,
    HT_TAG_MAP,
    HT_TAG_AREA,
    HT_TAG_TABLE,
    HT_TAG_CAPTION,
    HT_TAG_COLGROUP,
    HT_TAG_COL,
    HT_TAG_TBODY,
    HT_TAG_THEAD,
    HT_TAG_TFOOT,
    HT_TAG_TR,
    HT_TAG_TD,
    HT_TAG_TH,
    HT_TAG_FORM,
    HT_TAG_FIELDSET,
    HT_TAG_LEGEND,
    HT_TAG_LABEL,
    HT_TAG_INPUT,
    HT_TAG_BUTTON,
    HT_TAG_SELECT,
    HT_TAG_DATALIST,
    HT_TAG_OPTGROUP,
    HT_TAG_OPTION,
    HT_TAG_TEXTAREA,
    HT_TAG_KEYGEN,
    HT_TAG_OUTPUT,
    HT_TAG_PROGRESS,
    HT_TAG_METER,
    HT_TAG_DETAILS,
    HT_TAG_SUMMARY,
    HT_TAG_COMMAND,
    HT_TAG_MENU,
    HT_TAG_DIALOG,
    HT_TAG_UNKNOWN,
};

class Tokenizer {
public:
    static void Testing(std::string input);
    std::vector<HtmlTag> ParseString(std::string input);
    int TestInstance(std::string input);
    static HtmlTag GetTokenFrom(std::string input);
    Tokenizer();

private:
    long int tail;
    long int head;
};

}

#endif // !HTML_TOKENIZER_TOKENIZER
