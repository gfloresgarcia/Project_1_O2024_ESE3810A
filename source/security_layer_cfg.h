/*
 * security_layer_cfg.h
 *
 *  Created on: 10 sep. 2024
 *      Author: Gustavo Flores
 */

#ifndef SECURITY_LAYER_CFG_H_
#define SECURITY_LAYER_CFG_H_

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define EXAMPLE_ENET     Driver_ETH_MAC0
#define EXAMPLE_ENET_PHY Driver_ETH_PHY0

#ifndef MAC_ADDRESS
#define MAC_ADDRESS {0xd4, 0xbe, 0xd9, 0x45, 0x22, 0x61}
#endif

#define MAC_Destination {0xd4, 0xbe, 0xd9, 0x45, 0x22, 0x62}

#define HeaderETH	14
#define DataLength	1000
#define MinData		46

#define KEY {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06}
#define IV {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06}

#endif /* SECURITY_LAYER_CFG_H_ */
