#include "esp32_ethernet.h"
#include "sdkconfig.h"
#include "esp_netif.h"
#include "esp_eth.h"
#include "esp_event.h"

void init_eth_device() {
    esp_netif_config_t cfg = ESP_NETIF_DEFAULT_ETH();
    esp_netif_t *eth_netif = esp_netif_new(&cfg);

    eth_mac_config_t mac_config = ETH_MAC_DEFAULT_CONFIG();
    eth_phy_config_t phy_config = ETH_PHY_DEFAULT_CONFIG();

    phy_config.phy_addr = CONFIG_ETH_PHY_ADDR;
    phy_config.reset_gpio_num = CONFIG_ETH_PHY_RST;
    eth_esp32_emac_config_t esp32_emac_config = ETH_ESP32_EMAC_DEFAULT_CONFIG();
    esp32_emac_config.smi_mdc_gpio_num = CONFIG_ETH_MDC_GPIO;
    esp32_emac_config.smi_mdio_gpio_num = CONFIG_EXAMPLE_ETH_MDIO_GPIO;
    esp_eth_mac_t *mac = esp_eth_mac_new_esp32(&esp32_emac_config, &mac_config);
}

void eth_connect(eth_config_t* config) {
    
}

int32_t get_eth_mac_addr(u8_t* dst) {

}

void mac_addr_to_str(u8_t* mac, char* dst, int32_t len) {

}

int32_t get_eth_ip_addr(u8_t* dst) {

}

void ip_addr_to_str(u8_t* mac, char* dst, int32_t len) {

}