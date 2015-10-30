
enum {
  CPT_ESCAPE, /* 0 */
  CPT_SYMBOL,
  CPT_SYMREF,
  CPT_WEIRD_SYMBOL,
  CPT_KEYWORD,
  CPT_BYTE_STRING,
  CPT_CHAR_STRING,
  CPT_CHAR,
  CPT_INT,
  CPT_NULL,
  CPT_TRUE, /* 10 */
  CPT_FALSE,
  CPT_VOID,
  CPT_BOX,
  CPT_PAIR,
  CPT_LIST,
  CPT_VECTOR,
  CPT_HASH_TABLE,
  CPT_STX,
  CPT_LET_ONE_TYPED,
  CPT_MARSHALLED, /* 20 */
  CPT_QUOTE,
  CPT_REFERENCE,
  CPT_LOCAL,
  CPT_LOCAL_UNBOX,
  CPT_SVECTOR,
  CPT_APPLICATION,
  CPT_LET_ONE,
  CPT_BRANCH,
  CPT_MODULE_INDEX,
  CPT_MODULE_VAR, /* 30 */
  CPT_PATH,
  CPT_CLOSURE,
  CPT_DELAY_REF,
  CPT_PREFAB,
  CPT_LET_ONE_UNUSED,
  CPT_SCOPE,
  CPT_ROOT_SCOPE,
  CPT_SHARED,
  _CPT_COUNT_
};

#define CPT_SMALL_NUMBER_START 39
#define CPT_SMALL_NUMBER_END   62

#define CPT_SMALL_SYMBOL_START 62
#define CPT_SMALL_SYMBOL_END   80

#define CPT_SMALL_MARSHALLED_START 80
#define CPT_SMALL_MARSHALLED_END 92

#define _SMALL_LIST_MAX_ 50

#define CPT_SMALL_PROPER_LIST_START 92
#define CPT_SMALL_PROPER_LIST_END  (CPT_SMALL_PROPER_LIST_START + _SMALL_LIST_MAX_) 

#define CPT_SMALL_LIST_START CPT_SMALL_PROPER_LIST_END
#define CPT_SMALL_LIST_END   (CPT_SMALL_LIST_START + _SMALL_LIST_MAX_)

#define CPT_SMALL_LOCAL_START 192
#define CPT_SMALL_LOCAL_END 207
#define CPT_SMALL_LOCAL_UNBOX_START 207
#define CPT_SMALL_LOCAL_UNBOX_END 222

#define CPT_SMALL_SVECTOR_START 222
#define CPT_SMALL_SVECTOR_END 247

#define CPT_SMALL_APPLICATION_START 247
#define CPT_SMALL_APPLICATION_END 255
#define CPT_SMALL_APPLICATION2 248
#define CPT_SMALL_APPLICATION3 249

#define CPT_BETWEEN(x, s) ((x >= CPT_ ## s ## _START) && (x < CPT_ ## s ## _END))
#define CPT_RANGE(s) (CPT_ ## s ## _END - CPT_ ## s ## _START)
