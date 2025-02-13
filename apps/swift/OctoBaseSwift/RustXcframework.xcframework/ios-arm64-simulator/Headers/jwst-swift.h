// File automatically generated by swift-bridge.
#include <stdint.h>
#include <stdbool.h>
typedef struct Block Block;
void __swift_bridge__$Block$_free(void* self);

void* __swift_bridge__$Vec_Block$new(void);
void __swift_bridge__$Vec_Block$drop(void* vec_ptr);
void __swift_bridge__$Vec_Block$push(void* vec_ptr, void* item_ptr);
void* __swift_bridge__$Vec_Block$pop(void* vec_ptr);
void* __swift_bridge__$Vec_Block$get(void* vec_ptr, uintptr_t index);
void* __swift_bridge__$Vec_Block$get_mut(void* vec_ptr, uintptr_t index);
uintptr_t __swift_bridge__$Vec_Block$len(void* vec_ptr);
void* __swift_bridge__$Vec_Block$as_ptr(void* vec_ptr);

typedef struct DynamicValueMap DynamicValueMap;
void __swift_bridge__$DynamicValueMap$_free(void* self);

void* __swift_bridge__$Vec_DynamicValueMap$new(void);
void __swift_bridge__$Vec_DynamicValueMap$drop(void* vec_ptr);
void __swift_bridge__$Vec_DynamicValueMap$push(void* vec_ptr, void* item_ptr);
void* __swift_bridge__$Vec_DynamicValueMap$pop(void* vec_ptr);
void* __swift_bridge__$Vec_DynamicValueMap$get(void* vec_ptr, uintptr_t index);
void* __swift_bridge__$Vec_DynamicValueMap$get_mut(void* vec_ptr, uintptr_t index);
uintptr_t __swift_bridge__$Vec_DynamicValueMap$len(void* vec_ptr);
void* __swift_bridge__$Vec_DynamicValueMap$as_ptr(void* vec_ptr);

typedef struct DynamicValue DynamicValue;
void __swift_bridge__$DynamicValue$_free(void* self);

void* __swift_bridge__$Vec_DynamicValue$new(void);
void __swift_bridge__$Vec_DynamicValue$drop(void* vec_ptr);
void __swift_bridge__$Vec_DynamicValue$push(void* vec_ptr, void* item_ptr);
void* __swift_bridge__$Vec_DynamicValue$pop(void* vec_ptr);
void* __swift_bridge__$Vec_DynamicValue$get(void* vec_ptr, uintptr_t index);
void* __swift_bridge__$Vec_DynamicValue$get_mut(void* vec_ptr, uintptr_t index);
uintptr_t __swift_bridge__$Vec_DynamicValue$len(void* vec_ptr);
void* __swift_bridge__$Vec_DynamicValue$as_ptr(void* vec_ptr);

typedef struct Workspace Workspace;
void __swift_bridge__$Workspace$_free(void* self);

void* __swift_bridge__$Vec_Workspace$new(void);
void __swift_bridge__$Vec_Workspace$drop(void* vec_ptr);
void __swift_bridge__$Vec_Workspace$push(void* vec_ptr, void* item_ptr);
void* __swift_bridge__$Vec_Workspace$pop(void* vec_ptr);
void* __swift_bridge__$Vec_Workspace$get(void* vec_ptr, uintptr_t index);
void* __swift_bridge__$Vec_Workspace$get_mut(void* vec_ptr, uintptr_t index);
uintptr_t __swift_bridge__$Vec_Workspace$len(void* vec_ptr);
void* __swift_bridge__$Vec_Workspace$as_ptr(void* vec_ptr);

typedef struct JwstWorkSpaceResult JwstWorkSpaceResult;
void __swift_bridge__$JwstWorkSpaceResult$_free(void* self);

void* __swift_bridge__$Vec_JwstWorkSpaceResult$new(void);
void __swift_bridge__$Vec_JwstWorkSpaceResult$drop(void* vec_ptr);
void __swift_bridge__$Vec_JwstWorkSpaceResult$push(void* vec_ptr, void* item_ptr);
void* __swift_bridge__$Vec_JwstWorkSpaceResult$pop(void* vec_ptr);
void* __swift_bridge__$Vec_JwstWorkSpaceResult$get(void* vec_ptr, uintptr_t index);
void* __swift_bridge__$Vec_JwstWorkSpaceResult$get_mut(void* vec_ptr, uintptr_t index);
uintptr_t __swift_bridge__$Vec_JwstWorkSpaceResult$len(void* vec_ptr);
void* __swift_bridge__$Vec_JwstWorkSpaceResult$as_ptr(void* vec_ptr);

typedef struct Storage Storage;
void __swift_bridge__$Storage$_free(void* self);

void* __swift_bridge__$Vec_Storage$new(void);
void __swift_bridge__$Vec_Storage$drop(void* vec_ptr);
void __swift_bridge__$Vec_Storage$push(void* vec_ptr, void* item_ptr);
void* __swift_bridge__$Vec_Storage$pop(void* vec_ptr);
void* __swift_bridge__$Vec_Storage$get(void* vec_ptr, uintptr_t index);
void* __swift_bridge__$Vec_Storage$get_mut(void* vec_ptr, uintptr_t index);
uintptr_t __swift_bridge__$Vec_Storage$len(void* vec_ptr);
void* __swift_bridge__$Vec_Storage$as_ptr(void* vec_ptr);

void* __swift_bridge__$Block$get(void* self, void* block_id);
void* __swift_bridge__$Block$children(void* self);
void __swift_bridge__$Block$push_children(void* self, void* block);
void __swift_bridge__$Block$insert_children_at(void* self, void* block, uint32_t pos);
void __swift_bridge__$Block$insert_children_before(void* self, void* block, struct RustStr reference);
void __swift_bridge__$Block$insert_children_after(void* self, void* block, struct RustStr reference);
void __swift_bridge__$Block$remove_children(void* self, void* block);
int32_t __swift_bridge__$Block$exists_children(void* self, struct RustStr block_id);
void* __swift_bridge__$Block$parent(void* self);
uint64_t __swift_bridge__$Block$updated(void* self);
void* __swift_bridge__$Block$id(void* self);
void* __swift_bridge__$Block$flavour(void* self);
void* __swift_bridge__$Block$version(void* self);
uint64_t __swift_bridge__$Block$created(void* self);
void __swift_bridge__$Block$set_bool(void* self, void* key, bool value);
void __swift_bridge__$Block$set_string(void* self, void* key, void* value);
void __swift_bridge__$Block$set_float(void* self, void* key, double value);
void __swift_bridge__$Block$set_integer(void* self, void* key, int64_t value);
void __swift_bridge__$Block$set_null(void* self, void* key);
bool __swift_bridge__$Block$is_bool(void* self, void* key);
bool __swift_bridge__$Block$is_string(void* self, void* key);
bool __swift_bridge__$Block$is_float(void* self, void* key);
bool __swift_bridge__$Block$is_integer(void* self, void* key);
struct __private__OptionI64 __swift_bridge__$Block$get_bool(void* self, void* key);
void* __swift_bridge__$Block$get_string(void* self, void* key);
struct __private__OptionF64 __swift_bridge__$Block$get_float(void* self, void* key);
struct __private__OptionI64 __swift_bridge__$Block$get_integer(void* self, void* key);
struct __private__OptionBool __swift_bridge__$DynamicValue$as_bool(void* self);
struct __private__OptionF64 __swift_bridge__$DynamicValue$as_number(void* self);
struct __private__OptionI64 __swift_bridge__$DynamicValue$as_int(void* self);
void* __swift_bridge__$DynamicValue$as_string(void* self);
void* __swift_bridge__$DynamicValue$as_map(void* self);
void* __swift_bridge__$DynamicValue$as_array(void* self);
void* __swift_bridge__$DynamicValue$as_buffer(void* self);
void* __swift_bridge__$Workspace$new(void* id);
void* __swift_bridge__$Workspace$id(void* self);
uint64_t __swift_bridge__$Workspace$client_id(void* self);
void* __swift_bridge__$Workspace$get(void* self, void* block_id);
void* __swift_bridge__$Workspace$create(void* self, void* block_id, void* flavour);
void* __swift_bridge__$Workspace$search(void* self, void* query);
void* __swift_bridge__$Workspace$get_blocks_by_flavour(void* self, struct RustStr flavour);
void* __swift_bridge__$Workspace$get_search_index(void* self);
bool __swift_bridge__$Workspace$set_search_index(void* self, void* fields);
void* __swift_bridge__$Storage$new(void* path);
void* __swift_bridge__$Storage$new_with_log_level(void* path, void* level);
void* __swift_bridge__$Storage$error(void* self);
bool __swift_bridge__$Storage$is_offline(void* self);
bool __swift_bridge__$Storage$is_initialized(void* self);
bool __swift_bridge__$Storage$is_syncing(void* self);
bool __swift_bridge__$Storage$is_finished(void* self);
bool __swift_bridge__$Storage$is_error(void* self);
void* __swift_bridge__$Storage$get_sync_state(void* self);
void* __swift_bridge__$Storage$connect(void* self, void* workspace_id, void* remote);
void* __swift_bridge__$Storage$sync(void* self, void* workspace_id, void* remote);


