#include "./lib/mheader.h"

int
main(int argc, char** argv){
    if(argc < 2)
        abort_w_msg("Too few arguments", ERROR);

    switch (parse_cmd(argc, argv)) {
        case parse_returns::SHOW_VERSION:
            std::cout << VERSION << std::endl;
            break;
        
        case parse_returns::PARSE_SUCCESS:
        default:
            break;
    }

    return SUCCESS;
}