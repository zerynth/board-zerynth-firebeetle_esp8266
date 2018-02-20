

#if defined(VM_OTA)

//no VM OTA!
#define VM_OTA_MAX_VM 1
#define VM_OTA_MAX_BC 2
//one sector before system_params
//rtc mem
#define VM_OTA_RECORD 0x60001200
//0xF0000
//0x1fa000
#define VM_OTA_VM_ADDR(idx) (0)
#define VM_OTA_BYTECODE(idx) ( ((idx)%(VM_OTA_MAX_BC)) ? (0xb0000):(0x70000))
#define VM_OTA_NEXT_VM_SLOT() (0)
#define VM_OTA_NEXT_BC_SLOT(curbc) (((curbc)+1)%(VM_OTA_MAX_BC))

#define VM_OTA_FLASH_CHUNK 4

#ifndef VM_OTA_INDEX
#define VM_OTA_INDEX 0
#endif

#define VM_OTA_MAP_ADDRESS(x) ((0x40200000)+(x))
#define VM_OTA_UNMAP_ADDRESS(x) ((x)-(0x40200000))

#define VM_OTA_RECORD_PORT_DEPENDENT 1

#define VM_OTA_PREFERRED_CHUNK 64

#endif

