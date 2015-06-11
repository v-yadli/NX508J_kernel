/* Copyright (c) 2014, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __MSM_BUS_IDS_H
#define __MSM_BUS_IDS_H

/* Topology related enums */
#define	MSM_BUS_FAB_DEFAULT 0
#define	MSM_BUS_FAB_APPSS 0
#define	MSM_BUS_FAB_SYSTEM 1024
#define	MSM_BUS_FAB_MMSS 2048
#define	MSM_BUS_FAB_SYSTEM_FPB 3072
#define	MSM_BUS_FAB_CPSS_FPB 4096

#define	MSM_BUS_FAB_BIMC 0
#define	MSM_BUS_FAB_SYS_NOC 1024
#define	MSM_BUS_FAB_MMSS_NOC 2048
#define	MSM_BUS_FAB_OCMEM_NOC 3072
#define	MSM_BUS_FAB_PERIPH_NOC 4096
#define	MSM_BUS_FAB_CONFIG_NOC 5120
#define	MSM_BUS_FAB_OCMEM_VNOC 6144

#define	MSM_BUS_MASTER_FIRST 1
#define	MSM_BUS_MASTER_AMPSS_M0 1
#define	MSM_BUS_MASTER_AMPSS_M1 2
#define	MSM_BUS_APPSS_MASTER_FAB_MMSS 3
#define	MSM_BUS_APPSS_MASTER_FAB_SYSTEM 4
#define	MSM_BUS_SYSTEM_MASTER_FAB_APPSS 5
#define	MSM_BUS_MASTER_SPS 6
#define	MSM_BUS_MASTER_ADM_PORT0 7
#define	MSM_BUS_MASTER_ADM_PORT1 8
#define	MSM_BUS_SYSTEM_MASTER_ADM1_PORT0 9
#define	MSM_BUS_MASTER_ADM1_PORT1 10
#define	MSM_BUS_MASTER_LPASS_PROC 11
#define	MSM_BUS_MASTER_MSS_PROCI 12
#define	MSM_BUS_MASTER_MSS_PROCD 13
#define	MSM_BUS_MASTER_MSS_MDM_PORT0 14
#define	MSM_BUS_MASTER_LPASS 15
#define	MSM_BUS_SYSTEM_MASTER_CPSS_FPB 16
#define	MSM_BUS_SYSTEM_MASTER_SYSTEM_FPB 17
#define	MSM_BUS_SYSTEM_MASTER_MMSS_FPB 18
#define	MSM_BUS_MASTER_ADM1_CI 19
#define	MSM_BUS_MASTER_ADM0_CI 20
#define	MSM_BUS_MASTER_MSS_MDM_PORT1 21
#define	MSM_BUS_MASTER_MDP_PORT0 22
#define	MSM_BUS_MASTER_MDP_PORT1 23
#define	MSM_BUS_MMSS_MASTER_ADM1_PORT0 24
#define	MSM_BUS_MASTER_ROTATOR 25
#define	MSM_BUS_MASTER_GRAPHICS_3D 26
#define	MSM_BUS_MASTER_JPEG_DEC 27
#define	MSM_BUS_MASTER_GRAPHICS_2D_CORE0 28
#define	MSM_BUS_MASTER_VFE 29
#define	MSM_BUS_MASTER_VPE 30
#define	MSM_BUS_MASTER_JPEG_ENC 31
#define	MSM_BUS_MASTER_GRAPHICS_2D_CORE1 32
#define	MSM_BUS_MMSS_MASTER_APPS_FAB 33
#define	MSM_BUS_MASTER_HD_CODEC_PORT0 34
#define	MSM_BUS_MASTER_HD_CODEC_PORT1 35
#define	MSM_BUS_MASTER_SPDM 36
#define	MSM_BUS_MASTER_RPM 37
#define	MSM_BUS_MASTER_MSS 38
#define	MSM_BUS_MASTER_RIVA 39
#define	MSM_BUS_SYSTEM_MASTER_UNUSED_6 40
#define	MSM_BUS_MASTER_MSS_SW_PROC 41
#define	MSM_BUS_MASTER_MSS_FW_PROC 42
#define	MSM_BUS_MMSS_MASTER_UNUSED_2 43
#define	MSM_BUS_MASTER_GSS_NAV 44
#define	MSM_BUS_MASTER_PCIE 45
#define	MSM_BUS_MASTER_SATA 46
#define	MSM_BUS_MASTER_CRYPTO 47
#define	MSM_BUS_MASTER_VIDEO_CAP 48
#define	MSM_BUS_MASTER_GRAPHICS_3D_PORT1 49
#define	MSM_BUS_MASTER_VIDEO_ENC 50
#define	MSM_BUS_MASTER_VIDEO_DEC 51
#define	MSM_BUS_MASTER_LPASS_AHB 52
#define	MSM_BUS_MASTER_QDSS_BAM 53
#define	MSM_BUS_MASTER_SNOC_CFG 54
#define	MSM_BUS_MASTER_CRYPTO_CORE0 55
#define	MSM_BUS_MASTER_CRYPTO_CORE1 56
#define	MSM_BUS_MASTER_MSS_NAV 57
#define	MSM_BUS_MASTER_OCMEM_DMA 58
#define	MSM_BUS_MASTER_WCSS 59
#define	MSM_BUS_MASTER_QDSS_ETR 60
#define	MSM_BUS_MASTER_USB3 61
#define	MSM_BUS_MASTER_JPEG 62
#define	MSM_BUS_MASTER_VIDEO_P0 63
#define	MSM_BUS_MASTER_VIDEO_P1 64
#define	MSM_BUS_MASTER_MSS_PROC 65
#define	MSM_BUS_MASTER_JPEG_OCMEM 66
#define	MSM_BUS_MASTER_MDP_OCMEM 67
#define	MSM_BUS_MASTER_VIDEO_P0_OCMEM 68
#define	MSM_BUS_MASTER_VIDEO_P1_OCMEM 69
#define	MSM_BUS_MASTER_VFE_OCMEM 70
#define	MSM_BUS_MASTER_CNOC_ONOC_CFG 71
#define	MSM_BUS_MASTER_RPM_INST 72
#define	MSM_BUS_MASTER_RPM_DATA 73
#define	MSM_BUS_MASTER_RPM_SYS 74
#define	MSM_BUS_MASTER_DEHR 75
#define	MSM_BUS_MASTER_QDSS_DAP 76
#define	MSM_BUS_MASTER_TIC 77
#define	MSM_BUS_MASTER_SDCC_1 78
#define	MSM_BUS_MASTER_SDCC_3 79
#define	MSM_BUS_MASTER_SDCC_4 80
#define	MSM_BUS_MASTER_SDCC_2 81
#define	MSM_BUS_MASTER_TSIF 82
#define	MSM_BUS_MASTER_BAM_DMA 83
#define	MSM_BUS_MASTER_BLSP_2 84
#define	MSM_BUS_MASTER_USB_HSIC 85
#define	MSM_BUS_MASTER_BLSP_1 86
#define	MSM_BUS_MASTER_USB_HS 87
#define	MSM_BUS_MASTER_PNOC_CFG 88
#define	MSM_BUS_MASTER_V_OCMEM_GFX3D 89
#define	MSM_BUS_MASTER_IPA 90
#define	MSM_BUS_MASTER_QPIC 91
#define	MSM_BUS_MASTER_MDPE 92
#define	MSM_BUS_MASTER_USB_HS2 93
#define	MSM_BUS_MASTER_VPU 94
#define	MSM_BUS_MASTER_UFS 95
#define	MSM_BUS_MASTER_BCAST 96
#define	MSM_BUS_MASTER_CRYPTO_CORE2 97
#define	MSM_BUS_MASTER_EMAC 98
#define	MSM_BUS_MASTER_VPU_1 99
#define	MSM_BUS_MASTER_PCIE_1 100
#define	MSM_BUS_MASTER_USB3_1 101
#define	MSM_BUS_MASTER_CNOC_MNOC_MMSS_CFG 102
#define	MSM_BUS_MASTER_CNOC_MNOC_CFG 103
#define	MSM_BUS_MASTER_TCU_0 104
#define	MSM_BUS_MASTER_TCU_1 105
#define	MSM_BUS_MASTER_CPP 106
#define MSM_BUS_MASTER_AUDIO	107
#define	MSM_BUS_MASTER_LAST 108

#define MSM_BUS_SYSTEM_FPB_MASTER_SYSTEM MSM_BUS_SYSTEM_MASTER_SYSTEM_FPB
#define MSM_BUS_CPSS_FPB_MASTER_SYSTEM MSM_BUS_SYSTEM_MASTER_CPSS_FPB

#define	MSM_BUS_SNOC_MM_INT_0 10000
#define	MSM_BUS_SNOC_MM_INT_1 10001
#define	MSM_BUS_SNOC_MM_INT_2 10002
#define	MSM_BUS_SNOC_MM_INT_BIMC 10003
#define	MSM_BUS_SNOC_INT_0 10004
#define	MSM_BUS_SNOC_INT_1 10005
#define	MSM_BUS_SNOC_INT_BIMC 10006
#define	MSM_BUS_SNOC_BIMC_0_MAS 10007
#define	MSM_BUS_SNOC_BIMC_1_MAS 10008
#define	MSM_BUS_SNOC_QDSS_INT 10009
#define	MSM_BUS_PNOC_SNOC_MAS 10010
#define	MSM_BUS_PNOC_SNOC_SLV 10011
#define	MSM_BUS_PNOC_INT_0 10012
#define	MSM_BUS_PNOC_INT_1 10013
#define	MSM_BUS_PNOC_M_0 10014
#define	MSM_BUS_PNOC_M_1 10015
#define	MSM_BUS_BIMC_SNOC_MAS 10016
#define	MSM_BUS_BIMC_SNOC_SLV 10017
#define	MSM_BUS_PNOC_SLV_0 10018
#define	MSM_BUS_PNOC_SLV_1 10019
#define	MSM_BUS_PNOC_SLV_2 10020
#define	MSM_BUS_PNOC_SLV_3 10021
#define	MSM_BUS_PNOC_SLV_4 10022
#define	MSM_BUS_PNOC_SLV_8 10023
#define	MSM_BUS_PNOC_SLV_9 10024
#define	MSM_BUS_SNOC_BIMC_0_SLV 10025
#define	MSM_BUS_SNOC_BIMC_1_SLV 10026
#define MSM_BUS_MNOC_BIMC_MAS 10027
#define MSM_BUS_MNOC_BIMC_SLV 10028
#define MSM_BUS_BIMC_MNOC_MAS 10029
#define MSM_BUS_BIMC_MNOC_SLV 10030
#define MSM_BUS_SNOC_BIMC_MAS 10031
#define MSM_BUS_SNOC_BIMC_SLV 10032
#define MSM_BUS_CNOC_SNOC_MAS 10033
#define MSM_BUS_CNOC_SNOC_SLV 10034
#define MSM_BUS_SNOC_CNOC_MAS 10035
#define MSM_BUS_SNOC_CNOC_SLV 10036
#define MSM_BUS_OVNOC_SNOC_MAS 10037
#define MSM_BUS_OVNOC_SNOC_SLV 10038
#define MSM_BUS_SNOC_OVNOC_MAS 10039
#define MSM_BUS_SNOC_OVNOC_SLV 10040
#define MSM_BUS_SNOC_PNOC_MAS 10041
#define MSM_BUS_SNOC_PNOC_SLV 10042
#define MSM_BUS_BIMC_INT_APPS_EBI 10043
#define MSM_BUS_BIMC_INT_APPS_SNOC 10044
#define	MSM_BUS_SNOC_BIMC_2_MAS 10045
#define	MSM_BUS_SNOC_BIMC_2_SLV 10046
#define	MSM_BUS_PNOC_SLV_5	10047
#define	MSM_BUS_PNOC_SLV_7	10048
#define	MSM_BUS_PNOC_INT_2 10049
#define	MSM_BUS_PNOC_INT_3 10050
#define	MSM_BUS_PNOC_INT_4 10051
#define	MSM_BUS_PNOC_INT_5 10052
#define	MSM_BUS_PNOC_INT_6 10053
#define	MSM_BUS_PNOC_INT_7 10054
#define	MSM_BUS_INT_LAST 10055

#define MSM_BUS_INT_TEST_ID	20000
#define MSM_BUS_INT_TEST_LAST	20050

#define	MSM_BUS_SLAVE_FIRST 512
#define	MSM_BUS_SLAVE_EBI_CH0 512
#define	MSM_BUS_SLAVE_EBI_CH1 513
#define	MSM_BUS_SLAVE_AMPSS_L2 514
#define	MSM_BUS_APPSS_SLAVE_FAB_MMSS 515
#define	MSM_BUS_APPSS_SLAVE_FAB_SYSTEM 516
#define	MSM_BUS_SYSTEM_SLAVE_FAB_APPS 517
#define	MSM_BUS_SLAVE_SPS 518
#define	MSM_BUS_SLAVE_SYSTEM_IMEM 519
#define	MSM_BUS_SLAVE_AMPSS 520
#define	MSM_BUS_SLAVE_MSS 521
#define	MSM_BUS_SLAVE_LPASS 522
#define	MSM_BUS_SYSTEM_SLAVE_CPSS_FPB 523
#define	MSM_BUS_SYSTEM_SLAVE_SYSTEM_FPB 524
#define	MSM_BUS_SYSTEM_SLAVE_MMSS_FPB 525
#define	MSM_BUS_SLAVE_CORESIGHT 526
#define	MSM_BUS_SLAVE_RIVA 527
#define	MSM_BUS_SLAVE_SMI 528
#define	MSM_BUS_MMSS_SLAVE_FAB_APPS 529
#define	MSM_BUS_MMSS_SLAVE_FAB_APPS_1 530
#define	MSM_BUS_SLAVE_MM_IMEM 531
#define	MSM_BUS_SLAVE_CRYPTO 532
#define	MSM_BUS_SLAVE_SPDM 533
#define	MSM_BUS_SLAVE_RPM 534
#define	MSM_BUS_SLAVE_RPM_MSG_RAM 535
#define	MSM_BUS_SLAVE_MPM 536
#define	MSM_BUS_SLAVE_PMIC1_SSBI1_A 537
#define	MSM_BUS_SLAVE_PMIC1_SSBI1_B 538
#define	MSM_BUS_SLAVE_PMIC1_SSBI1_C 539
#define	MSM_BUS_SLAVE_PMIC2_SSBI2_A 540
#define	MSM_BUS_SLAVE_PMIC2_SSBI2_B 541
#define	MSM_BUS_SLAVE_GSBI1_UART 542
#define	MSM_BUS_SLAVE_GSBI2_UART 543
#define	MSM_BUS_SLAVE_GSBI3_UART 544
#define	MSM_BUS_SLAVE_GSBI4_UART 545
#define	MSM_BUS_SLAVE_GSBI5_UART 546
#define	MSM_BUS_SLAVE_GSBI6_UART 547
#define	MSM_BUS_SLAVE_GSBI7_UART 548
#define	MSM_BUS_SLAVE_GSBI8_UART 549
#define	MSM_BUS_SLAVE_GSBI9_UART 550
#define	MSM_BUS_SLAVE_GSBI10_UART 551
#define	MSM_BUS_SLAVE_GSBI11_UART 552
#define	MSM_BUS_SLAVE_GSBI12_UART 553
#define	MSM_BUS_SLAVE_GSBI1_QUP 554
#define	MSM_BUS_SLAVE_GSBI2_QUP 555
#define	MSM_BUS_SLAVE_GSBI3_QUP 556
#define	MSM_BUS_SLAVE_GSBI4_QUP 557
#define	MSM_BUS_SLAVE_GSBI5_QUP 558
#define	MSM_BUS_SLAVE_GSBI6_QUP 559
#define	MSM_BUS_SLAVE_GSBI7_QUP 560
#define	MSM_BUS_SLAVE_GSBI8_QUP 561
#define	MSM_BUS_SLAVE_GSBI9_QUP 562
#define	MSM_BUS_SLAVE_GSBI10_QUP 563
#define	MSM_BUS_SLAVE_GSBI11_QUP 564
#define	MSM_BUS_SLAVE_GSBI12_QUP 565
#define	MSM_BUS_SLAVE_EBI2_NAND 566
#define	MSM_BUS_SLAVE_EBI2_CS0 567
#define	MSM_BUS_SLAVE_EBI2_CS1 568
#define	MSM_BUS_SLAVE_EBI2_CS2 569
#define	MSM_BUS_SLAVE_EBI2_CS3 570
#define	MSM_BUS_SLAVE_EBI2_CS4 571
#define	MSM_BUS_SLAVE_EBI2_CS5 572
#define	MSM_BUS_SLAVE_USB_FS1 573
#define	MSM_BUS_SLAVE_USB_FS2 574
#define	MSM_BUS_SLAVE_TSIF 575
#define	MSM_BUS_SLAVE_MSM_TSSC 576
#define	MSM_BUS_SLAVE_MSM_PDM 577
#define	MSM_BUS_SLAVE_MSM_DIMEM 578
#define	MSM_BUS_SLAVE_MSM_TCSR 579
#define	MSM_BUS_SLAVE_MSM_PRNG 580
#define	MSM_BUS_SLAVE_GSS 581
#define	MSM_BUS_SLAVE_SATA 582
#define	MSM_BUS_SLAVE_USB3 583
#define	MSM_BUS_SLAVE_WCSS 584
#define	MSM_BUS_SLAVE_OCIMEM 585
#define	MSM_BUS_SLAVE_SNOC_OCMEM 586
#define	MSM_BUS_SLAVE_SERVICE_SNOC 587
#define	MSM_BUS_SLAVE_QDSS_STM 588
#define	MSM_BUS_SLAVE_CAMERA_CFG 589
#define	MSM_BUS_SLAVE_DISPLAY_CFG 590
#define	MSM_BUS_SLAVE_OCMEM_CFG 591
#define	MSM_BUS_SLAVE_CPR_CFG 592
#define	MSM_BUS_SLAVE_CPR_XPU_CFG 593
#define	MSM_BUS_SLAVE_MISC_CFG 594
#define	MSM_BUS_SLAVE_MISC_XPU_CFG 595
#define	MSM_BUS_SLAVE_VENUS_CFG 596
#define	MSM_BUS_SLAVE_MISC_VENUS_CFG 597
#define	MSM_BUS_SLAVE_GRAPHICS_3D_CFG 598
#define	MSM_BUS_SLAVE_MMSS_CLK_CFG 599
#define	MSM_BUS_SLAVE_MMSS_CLK_XPU_CFG 600
#define	MSM_BUS_SLAVE_MNOC_MPU_CFG 601
#define	MSM_BUS_SLAVE_ONOC_MPU_CFG 602
#define	MSM_BUS_SLAVE_SERVICE_MNOC 603
#define	MSM_BUS_SLAVE_OCMEM 604
#define	MSM_BUS_SLAVE_SERVICE_ONOC 605
#define	MSM_BUS_SLAVE_SDCC_1 606
#define	MSM_BUS_SLAVE_SDCC_3 607
#define	MSM_BUS_SLAVE_SDCC_2 608
#define	MSM_BUS_SLAVE_SDCC_4 609
#define	MSM_BUS_SLAVE_BAM_DMA 610
#define	MSM_BUS_SLAVE_BLSP_2 611
#define	MSM_BUS_SLAVE_USB_HSIC 612
#define	MSM_BUS_SLAVE_BLSP_1 613
#define	MSM_BUS_SLAVE_USB_HS 614
#define	MSM_BUS_SLAVE_PDM 615
#define	MSM_BUS_SLAVE_PERIPH_APU_CFG 616
#define	MSM_BUS_SLAVE_PNOC_MPU_CFG 617
#define	MSM_BUS_SLAVE_PRNG 618
#define	MSM_BUS_SLAVE_SERVICE_PNOC 619
#define	MSM_BUS_SLAVE_CLK_CTL 620
#define	MSM_BUS_SLAVE_CNOC_MSS 621
#define	MSM_BUS_SLAVE_SECURITY 622
#define	MSM_BUS_SLAVE_TCSR 623
#define	MSM_BUS_SLAVE_TLMM 624
#define	MSM_BUS_SLAVE_CRYPTO_0_CFG 625
#define	MSM_BUS_SLAVE_CRYPTO_1_CFG 626
#define	MSM_BUS_SLAVE_IMEM_CFG 627
#define	MSM_BUS_SLAVE_MESSAGE_RAM 628
#define	MSM_BUS_SLAVE_BIMC_CFG 629
#define	MSM_BUS_SLAVE_BOOT_ROM 630
#define	MSM_BUS_SLAVE_CNOC_MNOC_MMSS_CFG 631
#define	MSM_BUS_SLAVE_PMIC_ARB 632
#define	MSM_BUS_SLAVE_SPDM_WRAPPER 633
#define	MSM_BUS_SLAVE_DEHR_CFG 634
#define	MSM_BUS_SLAVE_QDSS_CFG 635
#define	MSM_BUS_SLAVE_RBCPR_CFG 636
#define	MSM_BUS_SLAVE_RBCPR_QDSS_APU_CFG 637
#define	MSM_BUS_SLAVE_SNOC_MPU_CFG 638
#define	MSM_BUS_SLAVE_CNOC_ONOC_CFG 639
#define	MSM_BUS_SLAVE_CNOC_MNOC_CFG 640
#define	MSM_BUS_SLAVE_PNOC_CFG 641
#define	MSM_BUS_SLAVE_SNOC_CFG 642
#define	MSM_BUS_SLAVE_EBI1_DLL_CFG 643
#define	MSM_BUS_SLAVE_PHY_APU_CFG 644
#define	MSM_BUS_SLAVE_EBI1_PHY_CFG 645
#define	MSM_BUS_SLAVE_SERVICE_CNOC 646
#define	MSM_BUS_SLAVE_IPS_CFG 647
#define	MSM_BUS_SLAVE_QPIC 648
#define	MSM_BUS_SLAVE_DSI_CFG 649
#define	MSM_BUS_SLAVE_UFS_CFG 650
#define	MSM_BUS_SLAVE_RBCPR_CX_CFG 651
#define	MSM_BUS_SLAVE_RBCPR_MX_CFG 652
#define	MSM_BUS_SLAVE_PCIE_CFG 653
#define	MSM_BUS_SLAVE_USB_PHYS_CFG 654
#define	MSM_BUS_SLAVE_VIDEO_CAP_CFG 655
#define	MSM_BUS_SLAVE_AVSYNC_CFG 656
#define	MSM_BUS_SLAVE_CRYPTO_2_CFG 657
#define	MSM_BUS_SLAVE_VPU_CFG 658
#define	MSM_BUS_SLAVE_BCAST_CFG 659
#define	MSM_BUS_SLAVE_KLM_CFG 660
#define	MSM_BUS_SLAVE_GENI_IR_CFG 661
#define	MSM_BUS_SLAVE_OCMEM_GFX 662
#define	MSM_BUS_SLAVE_CATS_128 663
#define	MSM_BUS_SLAVE_OCMEM_64 664
#define MSM_BUS_SLAVE_PCIE_0 665
#define MSM_BUS_SLAVE_PCIE_1 666
#define	MSM_BUS_SLAVE_PCIE_0_CFG 667
#define	MSM_BUS_SLAVE_PCIE_1_CFG 668
#define	MSM_BUS_SLAVE_SRVC_MNOC 669
#define	MSM_BUS_SLAVE_USB_HS2 670
#define	MSM_BUS_SLAVE_AUDIO	671
#define	MSM_BUS_SLAVE_TCU	672
#define	MSM_BUS_SLAVE_APPSS	673
#define	MSM_BUS_SLAVE_PCIE_PARF	674
#define	MSM_BUS_SLAVE_USB3_PHY_CFG	675
#define	MSM_BUS_SLAVE_IPA_CFG	676
#define	MSM_BUS_SLAVE_LAST 677

#define	MSM_BUS_SYSTEM_FPB_SLAVE_SYSTEM  MSM_BUS_SYSTEM_SLAVE_SYSTEM_FPB
#define MSM_BUS_CPSS_FPB_SLAVE_SYSTEM MSM_BUS_SYSTEM_SLAVE_CPSS_FPB

/*
 * ID's used in RPM messages
 */
#define ICBID_MASTER_APPSS_PROC 0
#define ICBID_MASTER_MSS_PROC 1
#define ICBID_MASTER_MNOC_BIMC 2
#define ICBID_MASTER_SNOC_BIMC 3
#define ICBID_MASTER_SNOC_BIMC_0 ICBID_MASTER_SNOC_BIMC
#define ICBID_MASTER_CNOC_MNOC_MMSS_CFG 4
#define ICBID_MASTER_CNOC_MNOC_CFG 5
#define ICBID_MASTER_GFX3D 6
#define ICBID_MASTER_JPEG 7
#define ICBID_MASTER_MDP 8
#define ICBID_MASTER_MDP0 ICBID_MASTER_MDP
#define ICBID_MASTER_MDPS ICBID_MASTER_MDP
#define ICBID_MASTER_VIDEO 9
#define ICBID_MASTER_VIDEO_P0 ICBID_MASTER_VIDEO
#define ICBID_MASTER_VIDEO_P1 10
#define ICBID_MASTER_VFE 11
#define ICBID_MASTER_CNOC_ONOC_CFG 12
#define ICBID_MASTER_JPEG_OCMEM 13
#define ICBID_MASTER_MDP_OCMEM 14
#define ICBID_MASTER_VIDEO_P0_OCMEM 15
#define ICBID_MASTER_VIDEO_P1_OCMEM 16
#define ICBID_MASTER_VFE_OCMEM 17
#define ICBID_MASTER_LPASS_AHB 18
#define ICBID_MASTER_QDSS_BAM 19
#define ICBID_MASTER_SNOC_CFG 20
#define ICBID_MASTER_BIMC_SNOC 21
#define ICBID_MASTER_CNOC_SNOC 22
#define ICBID_MASTER_CRYPTO 23
#define ICBID_MASTER_CRYPTO_CORE0 ICBID_MASTER_CRYPTO
#define ICBID_MASTER_CRYPTO_CORE1 24
#define ICBID_MASTER_LPASS_PROC 25
#define ICBID_MASTER_MSS 26
#define ICBID_MASTER_MSS_NAV 27
#define ICBID_MASTER_OCMEM_DMA 28
#define ICBID_MASTER_PNOC_SNOC 29
#define ICBID_MASTER_WCSS 30
#define ICBID_MASTER_QDSS_ETR 31
#define ICBID_MASTER_USB3 32
#define ICBID_MASTER_USB3_0 ICBID_MASTER_USB3
#define ICBID_MASTER_SDCC_1 33
#define ICBID_MASTER_SDCC_3 34
#define ICBID_MASTER_SDCC_2 35
#define ICBID_MASTER_SDCC_4 36
#define ICBID_MASTER_TSIF 37
#define ICBID_MASTER_BAM_DMA 38
#define ICBID_MASTER_BLSP_2 39
#define ICBID_MASTER_USB_HSIC 40
#define ICBID_MASTER_BLSP_1 41
#define ICBID_MASTER_USB_HS 42
#define ICBID_MASTER_USB_HS1 ICBID_MASTER_USB_HS
#define ICBID_MASTER_PNOC_CFG 43
#define ICBID_MASTER_SNOC_PNOC 44
#define ICBID_MASTER_RPM_INST 45
#define ICBID_MASTER_RPM_DATA 46
#define ICBID_MASTER_RPM_SYS 47
#define ICBID_MASTER_DEHR 48
#define ICBID_MASTER_QDSS_DAP 49
#define ICBID_MASTER_SPDM 50
#define ICBID_MASTER_TIC 51
#define ICBID_MASTER_SNOC_CNOC 52
#define ICBID_MASTER_GFX3D_OCMEM 53
#define ICBID_MASTER_GFX3D_GMEM ICBID_MASTER_GFX3D_OCMEM
#define ICBID_MASTER_OVIRT_SNOC 54
#define ICBID_MASTER_SNOC_OVIRT 55
#define ICBID_MASTER_SNOC_GVIRT ICBID_MASTER_SNOC_OVIRT
#define ICBID_MASTER_ONOC_OVIRT 56
#define ICBID_MASTER_USB_HS2 57
#define ICBID_MASTER_QPIC 58
#define ICBID_MASTER_IPA 59
#define ICBID_MASTER_DSI 60
#define ICBID_MASTER_MDP1 61
#define ICBID_MASTER_MDPE ICBID_MASTER_MDP1
#define ICBID_MASTER_VPU_PROC 62
#define ICBID_MASTER_VPU 63
#define ICBID_MASTER_VPU0 ICBID_MASTER_VPU
#define ICBID_MASTER_CRYPTO_CORE2 64
#define ICBID_MASTER_PCIE_0 65
#define ICBID_MASTER_PCIE_1 66
#define ICBID_MASTER_SATA 67
#define ICBID_MASTER_UFS 68
#define ICBID_MASTER_USB3_1 69
#define ICBID_MASTER_VIDEO_OCMEM 70
#define ICBID_MASTER_VPU1 71
#define ICBID_MASTER_VCAP 72
#define ICBID_MASTER_EMAC 73
#define ICBID_MASTER_BCAST 74
#define ICBID_MASTER_MMSS_PROC 75
#define ICBID_MASTER_SNOC_BIMC_1 76
#define ICBID_MASTER_SNOC_PCNOC 77
#define ICBID_MASTER_AUDIO 78
#define ICBID_MASTER_MM_INT_0 79
#define ICBID_MASTER_MM_INT_1 80
#define ICBID_MASTER_MM_INT_2 81
#define ICBID_MASTER_MM_INT_BIMC 82
#define ICBID_MASTER_MSS_INT 83
#define ICBID_MASTER_PCNOC_CFG 84
#define ICBID_MASTER_PCNOC_INT_0 85
#define ICBID_MASTER_PCNOC_INT_1 86
#define ICBID_MASTER_PCNOC_M_0 87
#define ICBID_MASTER_PCNOC_M_1 88
#define ICBID_MASTER_PCNOC_S_0 89
#define ICBID_MASTER_PCNOC_S_1 90
#define ICBID_MASTER_PCNOC_S_2 91
#define ICBID_MASTER_PCNOC_S_3 92
#define ICBID_MASTER_PCNOC_S_4 93
#define ICBID_MASTER_PCNOC_S_6 94
#define ICBID_MASTER_PCNOC_S_7 95
#define ICBID_MASTER_PCNOC_S_8 96
#define ICBID_MASTER_PCNOC_S_9 97
#define ICBID_MASTER_QDSS_INT 98
#define ICBID_MASTER_SNOC_INT_0 99
#define ICBID_MASTER_SNOC_INT_1 100
#define ICBID_MASTER_SNOC_INT_BIMC 101
#define ICBID_MASTER_TCU_0 102
#define ICBID_MASTER_TCU_1 103
#define ICBID_MASTER_BIMC_INT_0 104
#define ICBID_MASTER_BIMC_INT_1 105
#define ICBID_MASTER_CAMERA 106
#define ICBID_MASTER_RICA 107
#define ICBID_MASTER_PCNOC_S_5	129
#define ICBID_MASTER_PCNOC_INT_2	124
#define ICBID_MASTER_PCNOC_INT_3	125
#define ICBID_MASTER_PCNOC_INT_4	126
#define ICBID_MASTER_PCNOC_INT_5	127
#define ICBID_MASTER_PCNOC_INT_6	128

#define ICBID_SLAVE_EBI1 0
#define ICBID_SLAVE_APPSS_L2 1
#define ICBID_SLAVE_BIMC_SNOC 2
#define ICBID_SLAVE_CAMERA_CFG 3
#define ICBID_SLAVE_DISPLAY_CFG 4
#define ICBID_SLAVE_OCMEM_CFG 5
#define ICBID_SLAVE_CPR_CFG 6
#define ICBID_SLAVE_CPR_XPU_CFG 7
#define ICBID_SLAVE_MISC_CFG 8
#define ICBID_SLAVE_MISC_XPU_CFG 9
#define ICBID_SLAVE_VENUS_CFG 10
#define ICBID_SLAVE_GFX3D_CFG 11
#define ICBID_SLAVE_MMSS_CLK_CFG 12
#define ICBID_SLAVE_MMSS_CLK_XPU_CFG 13
#define ICBID_SLAVE_MNOC_MPU_CFG 14
#define ICBID_SLAVE_ONOC_MPU_CFG 15
#define ICBID_SLAVE_MNOC_BIMC 16
#define ICBID_SLAVE_SERVICE_MNOC 17
#define ICBID_SLAVE_OCMEM 18
#define ICBID_SLAVE_GMEM ICBID_SLAVE_OCMEM
#define ICBID_SLAVE_SERVICE_ONOC 19
#define ICBID_SLAVE_APPSS 20
#define ICBID_SLAVE_LPASS 21
#define ICBID_SLAVE_USB3 22
#define ICBID_SLAVE_USB3_0 ICBID_SLAVE_USB3
#define ICBID_SLAVE_WCSS 23
#define ICBID_SLAVE_SNOC_BIMC 24
#define ICBID_SLAVE_SNOC_BIMC_0 ICBID_SLAVE_SNOC_BIMC
#define ICBID_SLAVE_SNOC_CNOC 25
#define ICBID_SLAVE_IMEM 26
#define ICBID_SLAVE_OCIMEM ICBID_SLAVE_IMEM
#define ICBID_SLAVE_SNOC_OVIRT 27
#define ICBID_SLAVE_SNOC_GVIRT ICBID_SLAVE_SNOC_OVIRT
#define ICBID_SLAVE_SNOC_PNOC 28
#define ICBID_SLAVE_SNOC_PCNOC ICBID_SLAVE_SNOC_PNOC
#define ICBID_SLAVE_SERVICE_SNOC 29
#define ICBID_SLAVE_QDSS_STM 30
#define ICBID_SLAVE_SDCC_1 31
#define ICBID_SLAVE_SDCC_3 32
#define ICBID_SLAVE_SDCC_2 33
#define ICBID_SLAVE_SDCC_4 34
#define ICBID_SLAVE_TSIF 35
#define ICBID_SLAVE_BAM_DMA 36
#define ICBID_SLAVE_BLSP_2 37
#define ICBID_SLAVE_USB_HSIC 38
#define ICBID_SLAVE_BLSP_1 39
#define ICBID_SLAVE_USB_HS 40
#define ICBID_SLAVE_USB_HS1 ICBID_SLAVE_USB_HS
#define ICBID_SLAVE_PDM 41
#define ICBID_SLAVE_PERIPH_APU_CFG 42
#define ICBID_SLAVE_PNOC_MPU_CFG 43
#define ICBID_SLAVE_PRNG 44
#define ICBID_SLAVE_PNOC_SNOC 45
#define ICBID_SLAVE_PCNOC_SNOC ICBID_SLAVE_PNOC_SNOC
#define ICBID_SLAVE_SERVICE_PNOC 46
#define ICBID_SLAVE_CLK_CTL 47
#define ICBID_SLAVE_CNOC_MSS 48
#define ICBID_SLAVE_PCNOC_MSS ICBID_SLAVE_CNOC_MSS
#define ICBID_SLAVE_SECURITY 49
#define ICBID_SLAVE_TCSR 50
#define ICBID_SLAVE_TLMM 51
#define ICBID_SLAVE_CRYPTO_0_CFG 52
#define ICBID_SLAVE_CRYPTO_1_CFG 53
#define ICBID_SLAVE_IMEM_CFG 54
#define ICBID_SLAVE_MESSAGE_RAM 55
#define ICBID_SLAVE_BIMC_CFG 56
#define ICBID_SLAVE_BOOT_ROM 57
#define ICBID_SLAVE_CNOC_MNOC_MMSS_CFG 58
#define ICBID_SLAVE_PMIC_ARB 59
#define ICBID_SLAVE_SPDM_WRAPPER 60
#define ICBID_SLAVE_DEHR_CFG 61
#define ICBID_SLAVE_MPM 62
#define ICBID_SLAVE_QDSS_CFG 63
#define ICBID_SLAVE_RBCPR_CFG 64
#define ICBID_SLAVE_RBCPR_CX_CFG ICBID_SLAVE_RBCPR_CFG
#define ICBID_SLAVE_RBCPR_QDSS_APU_CFG 65
#define ICBID_SLAVE_CNOC_MNOC_CFG 66
#define ICBID_SLAVE_SNOC_MPU_CFG 67
#define ICBID_SLAVE_CNOC_ONOC_CFG 68
#define ICBID_SLAVE_PNOC_CFG 69
#define ICBID_SLAVE_SNOC_CFG 70
#define ICBID_SLAVE_EBI1_DLL_CFG 71
#define ICBID_SLAVE_PHY_APU_CFG 72
#define ICBID_SLAVE_EBI1_PHY_CFG 73
#define ICBID_SLAVE_RPM 74
#define ICBID_SLAVE_CNOC_SNOC 75
#define ICBID_SLAVE_SERVICE_CNOC 76
#define ICBID_SLAVE_OVIRT_SNOC 77
#define ICBID_SLAVE_OVIRT_OCMEM 78
#define ICBID_SLAVE_USB_HS2 79
#define ICBID_SLAVE_QPIC 80
#define ICBID_SLAVE_IPS_CFG 81
#define ICBID_SLAVE_DSI_CFG 82
#define ICBID_SLAVE_USB3_1 83
#define ICBID_SLAVE_PCIE_0 84
#define ICBID_SLAVE_PCIE_1 85
#define ICBID_SLAVE_PSS_SMMU_CFG 86
#define ICBID_SLAVE_CRYPTO_2_CFG 87
#define ICBID_SLAVE_PCIE_0_CFG 88
#define ICBID_SLAVE_PCIE_1_CFG 89
#define ICBID_SLAVE_SATA_CFG 90
#define ICBID_SLAVE_SPSS_GENI_IR 91
#define ICBID_SLAVE_UFS_CFG 92
#define ICBID_SLAVE_AVSYNC_CFG 93
#define ICBID_SLAVE_VPU_CFG 94
#define ICBID_SLAVE_USB_PHY_CFG 95
#define ICBID_SLAVE_RBCPR_MX_CFG 96
#define ICBID_SLAVE_PCIE_PARF 97
#define ICBID_SLAVE_VCAP_CFG 98
#define ICBID_SLAVE_EMAC_CFG 99
#define ICBID_SLAVE_BCAST_CFG 100
#define ICBID_SLAVE_KLM_CFG 101
#define ICBID_SLAVE_DISPLAY_PWM 102
#define ICBID_SLAVE_GENI 103
#define ICBID_SLAVE_SNOC_BIMC_1 104
#define ICBID_SLAVE_AUDIO 105
#define ICBID_SLAVE_CATS_0 106
#define ICBID_SLAVE_CATS_1 107
#define ICBID_SLAVE_MM_INT_0 108
#define ICBID_SLAVE_MM_INT_1 109
#define ICBID_SLAVE_MM_INT_2 110
#define ICBID_SLAVE_MM_INT_BIMC 111
#define ICBID_SLAVE_MMU_MODEM_XPU_CFG 112
#define ICBID_SLAVE_MSS_INT 113
#define ICBID_SLAVE_PCNOC_INT_0 114
#define ICBID_SLAVE_PCNOC_INT_1 115
#define ICBID_SLAVE_PCNOC_M_0 116
#define ICBID_SLAVE_PCNOC_M_1 117
#define ICBID_SLAVE_PCNOC_S_0 118
#define ICBID_SLAVE_PCNOC_S_1 119
#define ICBID_SLAVE_PCNOC_S_2 120
#define ICBID_SLAVE_PCNOC_S_3 121
#define ICBID_SLAVE_PCNOC_S_4 122
#define ICBID_SLAVE_PCNOC_S_6 123
#define ICBID_SLAVE_PCNOC_S_7 124
#define ICBID_SLAVE_PCNOC_S_8 125
#define ICBID_SLAVE_PCNOC_S_9 126
#define ICBID_SLAVE_PRNG_XPU_CFG 127
#define ICBID_SLAVE_QDSS_INT 128
#define ICBID_SLAVE_RPM_XPU_CFG 129
#define ICBID_SLAVE_SNOC_INT_0 130
#define ICBID_SLAVE_SNOC_INT_1 131
#define ICBID_SLAVE_SNOC_INT_BIMC 132
#define ICBID_SLAVE_TCU 133
#define ICBID_SLAVE_BIMC_INT_0 134
#define ICBID_SLAVE_BIMC_INT_1 135
#define ICBID_SLAVE_RICA_CFG 136
#define ICBID_SLAVE_PCNOC_S_5	189
#define ICBID_SLAVE_PCNOC_INT_2 184
#define ICBID_SLAVE_PCNOC_INT_3 185
#define ICBID_SLAVE_PCNOC_INT_4 186
#define ICBID_SLAVE_PCNOC_INT_5 187
#define ICBID_SLAVE_PCNOC_INT_6 188
#define ICBID_SLAVE_USB3_PHY_CFG 182
#define ICBID_SLAVE_IPA_CFG 183

#endif
