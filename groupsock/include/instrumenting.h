#define INSTRUMENT(curr_var, prev_var) add_false_branch(#curr_var, curr_var, prev_var)

#ifdef __cplusplus
extern "C" {
#endif

void add_false_branch(const char* var_name, int curr, int prev);

#ifdef __cplusplus
}
#endif
