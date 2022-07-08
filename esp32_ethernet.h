#ifndef ESP32_ETHERNET_H
#define ESP32_ETHERNET_H
#include <inttypes.h>
#include "esp_event.h"

typedef struct {
    bool use_fix_ip;
    u8_t fix_ip[4];
    
    void (*eth_evt_cb)(void *arg, esp_event_base_t event_base,
                              int32_t event_id, void *event_data);

    void (*ip_event_handler) (void *arg, esp_event_base_t event_base,
                                 int32_t event_id, void *event_data);

} eth_config_t;

void init_eth_device();
void eth_connect(eth_config_t* config);

int32_t get_eth_mac_addr(u8_t* dst);
void mac_addr_to_str(u8_t* mac, char* dst, int32_t len);
int32_t get_eth_ip_addr(u8_t* dst);
void ip_addr_to_str(u8_t* mac, char* dst, int32_t len);

#endif