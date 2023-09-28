#include "pcsclite.h"
#include "cardreader.h"

void init_all(v8::Local<v8::Object> target) {
    PCSCLite::init(target);
    CardReader::init(target);
}

// see https://nodejs.org/api/addons.html#context-aware-addons
// see https://github.com/nodejs/nan/blob/v2.18.0/nan.h#L165
NAN_MODULE_WORKER_ENABLED(pcsclite, init_all)
