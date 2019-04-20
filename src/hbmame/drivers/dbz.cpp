// license:BSD-3-Clause
// copyright-holders:Robbbert
#include "../mame/drivers/dbz.cpp"

ROM_START( dbz2h01 )
	ROM_REGION( 0x400000, "maincpu", 0)
	ROM_LOAD16_BYTE( "h01.9e", 0x000000, 0x80000, CRC(5a7af60d) SHA1(11105ca1ebeef890eab96cfc501076fd9cf18b49) )
	ROM_LOAD16_BYTE( "h01.9f", 0x000001, 0x80000, CRC(b4df6f69) SHA1(a41e4e050ffdf132a00baef094c59d99416453e4) )

	ROM_REGION( 0x010000, "audiocpu", 0 )
	ROM_LOAD("s-001.5e", 0x000000, 0x08000, CRC(154e6d03) SHA1(db15c20982692271f40a733dfc3f2486221cd604) )

	ROM_REGION( 0x400000, "gfx1", 0)
	ROM_LOAD32_WORD( "ds-b01.27c", 0x000000, 0x200000, CRC(8dc39972) SHA1(c6e3d4e0ff069e08bdb68e2b0ad24cc7314e4e93) )
	ROM_LOAD32_WORD( "ds-b02.27e", 0x000002, 0x200000, CRC(7552f8cd) SHA1(1f3beffe9733b1a18d44b5e8880ff1cc97e7a8ab) )

	ROM_REGION( 0x800000, "gfx2", 0)
	ROM_LOAD64_WORD( "ds-o01.3j", 0x000000, 0x200000, CRC(d018531f) SHA1(d4082fe28e9f1f3f35aa75b4be650cadf1cef192) )
	ROM_LOAD64_WORD( "ds-o02.1j", 0x000002, 0x200000, CRC(5a0f1ebe) SHA1(3bb9e1389299dc046a24740ef1a1c543e44b5c37) )
	ROM_LOAD64_WORD( "ds-o03.3l", 0x000004, 0x200000, CRC(ddc3bef1) SHA1(69638ef53f627a238a12b6c206d57faadf894893) )
	ROM_LOAD64_WORD( "ds-o04.1l", 0x000006, 0x200000, CRC(b5df6676) SHA1(194cfce460ccd29e2cceec577aae4ec936ae88e5) )

	ROM_REGION( 0x400000, "gfx3", 0)
	ROM_LOAD( "ds-p01.25k", 0x000000, 0x200000, CRC(1c7aad68) SHA1(a5296cf12cec262eede55397ea929965576fea81) )
	ROM_LOAD( "ds-p02.27k", 0x200000, 0x200000, CRC(e4c3a43b) SHA1(f327f75fe82f8aafd2cfe6bdd3a426418615974b) )

	ROM_REGION( 0x400000, "gfx4", 0)
	ROM_LOAD( "ds-p03.25l", 0x000000, 0x200000, CRC(1eaa671b) SHA1(1875eefc6f2c3fc8feada56bfa6701144e8ef64b) )
	ROM_LOAD( "ds-p04.27l", 0x200000, 0x200000, CRC(5845ff98) SHA1(73b4c3f439321ce9c462119fe933e7cbda8cd498) )

	ROM_REGION( 0x40000, "oki", 0)
	ROM_LOAD( "pcm.7c", 0x000000, 0x40000, CRC(b58c884a) SHA1(0e2a7267e9dff29c9af25558081ec9d56629bc43) )
ROM_END

GAME( 2009, dbz2h01, dbz2, dbz, dbz2, dbz_state, init_dbz2, ROT0, "pipi899", "Dragon Ball Z 2 (Infinite Lives 2009-03-11)", MACHINE_SUPPORTS_SAVE ) // crashes MAME in tile/PSAC2 ROM test


 /****************************************************
         Proyecto Shadows Mame Build Plus
*****************************************************/

 /************
 Dragon Ball Z 
****************/

ROM_START( dbzs01 )
	ROM_REGION( 0x400000, "maincpu", 0)
	ROM_LOAD16_BYTE( "222b11_ps01.9e", 0x000000, 0x80000, CRC(7b545f5e) SHA1(5b01564f66d01ad4c711d4d309b7b3f49053fc4c) )
	ROM_IGNORE(0x3D4F47)
	ROM_LOAD16_BYTE( "222b12_ps01.9f", 0x000001, 0x80000, CRC(64e3d243) SHA1(25f3022e50e1142a09fd5c5fda983a52d13ef13a) )
	ROM_IGNORE(0x3D4F47)
	
	ROM_REGION( 0x010000, "audiocpu", 0 )
	ROM_LOAD("222a10.5e", 0x000000, 0x08000, CRC(1c93e30a) SHA1(8545a0ac5126b3c855e1901b186f57820699895d) )

	ROM_REGION( 0x400000, "gfx1", 0)
	ROM_LOAD32_WORD( "222a01.27c", 0x000000, 0x200000, CRC(9fce4ed4) SHA1(81e19375b351ee247f066434dd595149333d73c5) )
	ROM_LOAD32_WORD( "222a02.27e", 0x000002, 0x200000, CRC(651acaa5) SHA1(33942a90fb294b5da6a48e5bfb741b31babca188) )

	ROM_REGION( 0x800000, "gfx2", 0)
	ROM_LOAD64_WORD( "222a04.3j", 0x000000, 0x200000, CRC(2533b95a) SHA1(35910836b6030130d742eae6c4bf1cdf1ff43fa4) )
	ROM_LOAD64_WORD( "222a05.1j", 0x000002, 0x200000, CRC(731b7f93) SHA1(b676fff2ede5aa72c49fe12736cd60766462fe0b) )
	ROM_LOAD64_WORD( "222a06.3l", 0x000004, 0x200000, CRC(97b767d3) SHA1(3d879c431586da2f88c632ab1a531b4a5ec96939) )
	ROM_LOAD64_WORD( "222a07.1l", 0x000006, 0x200000, CRC(430bc873) SHA1(ea483195bb7f20ef3df7cfba153e5f6f8d53e5f9) )

	ROM_REGION( 0x200000, "gfx3", 0)
	ROM_LOAD( "222a08.25k", 0x000000, 0x200000, CRC(6410ee1b) SHA1(2296aafd3ba25f63a12130f7b58de53e88f14e92) )

	ROM_REGION( 0x200000, "gfx4", 0)
	ROM_LOAD( "222a09.25l", 0x000000, 0x200000, CRC(f7b3f070) SHA1(50ebd8cfcda292a3df5664de50f9212108d58923) )

	ROM_REGION( 0x40000, "oki", 0)
	ROM_LOAD( "222a03.7c", 0x000000, 0x40000, CRC(1924467b) SHA1(57922090509bcc63b4783e8f2c5e95afd2090b87) )
ROM_END

 /***************
 Dragon Ball Z 2
******************/

ROM_START( dbz2h02 )
	ROM_REGION( 0x400000, "maincpu", 0)
	ROM_LOAD16_BYTE( "h02.9e", 0x000000, 0x80000, CRC(c64a637c) SHA1(ce2976f4c2f5408aa702daaf1520aeb19e2a1b54) )
	ROM_LOAD16_BYTE( "h02.9f", 0x000001, 0x80000, CRC(dbb75c77) SHA1(2f6ede30e36bbaa54d55acc86d18cd66da0ec281) )

	ROM_REGION( 0x010000, "audiocpu", 0 )
	ROM_LOAD("s-001.5e", 0x000000, 0x08000, CRC(154e6d03) SHA1(db15c20982692271f40a733dfc3f2486221cd604) )

	ROM_REGION( 0x400000, "gfx1", 0)
	ROM_LOAD32_WORD( "ds-b01.27c", 0x000000, 0x200000, CRC(8dc39972) SHA1(c6e3d4e0ff069e08bdb68e2b0ad24cc7314e4e93) )
	ROM_LOAD32_WORD( "ds-b02.27e", 0x000002, 0x200000, CRC(7552f8cd) SHA1(1f3beffe9733b1a18d44b5e8880ff1cc97e7a8ab) )

	ROM_REGION( 0x800000, "gfx2", 0)
	ROM_LOAD64_WORD( "ds-o01.3j", 0x000000, 0x200000, CRC(d018531f) SHA1(d4082fe28e9f1f3f35aa75b4be650cadf1cef192) )
	ROM_LOAD64_WORD( "ds-o02.1j", 0x000002, 0x200000, CRC(5a0f1ebe) SHA1(3bb9e1389299dc046a24740ef1a1c543e44b5c37) )
	ROM_LOAD64_WORD( "ds-o03.3l", 0x000004, 0x200000, CRC(ddc3bef1) SHA1(69638ef53f627a238a12b6c206d57faadf894893) )
	ROM_LOAD64_WORD( "ds-o04.1l", 0x000006, 0x200000, CRC(b5df6676) SHA1(194cfce460ccd29e2cceec577aae4ec936ae88e5) )

	ROM_REGION( 0x400000, "gfx3", 0)
	ROM_LOAD( "ds-p01.25k", 0x000000, 0x200000, CRC(1c7aad68) SHA1(a5296cf12cec262eede55397ea929965576fea81) )
	ROM_LOAD( "ds-p02.27k", 0x200000, 0x200000, CRC(e4c3a43b) SHA1(f327f75fe82f8aafd2cfe6bdd3a426418615974b) )

	ROM_REGION( 0x400000, "gfx4", 0)
	ROM_LOAD( "ds-p03.25l", 0x000000, 0x200000, CRC(1eaa671b) SHA1(1875eefc6f2c3fc8feada56bfa6701144e8ef64b) )
	ROM_LOAD( "ds-p04.27l", 0x200000, 0x200000, CRC(5845ff98) SHA1(73b4c3f439321ce9c462119fe933e7cbda8cd498) )

	ROM_REGION( 0x40000, "oki", 0)
	ROM_LOAD( "pcm.7c", 0x000000, 0x40000, CRC(b58c884a) SHA1(0e2a7267e9dff29c9af25558081ec9d56629bc43) )
ROM_END

/*    YEAR  NAME            PARENT    MACHINE        INPUT       INIT             MONITOR COMPANY                 FULLNAME FLAGS */
// Dragon Ball Z
GAME( 2016, dbzs01,     dbz,  dbz, dbz,  dbz_state, init_dbz,  ROT0, "Unknown", "Dragon Ball Z (Simple Attack)", MACHINE_IMPERFECT_GRAPHICS | MACHINE_SUPPORTS_SAVE )
// Dragon Ball Z 2
GAME( 2009, dbz2h02, dbz2, dbz, dbz2, dbz_state, init_dbz2, ROT0, "Unknown", "Dragon Ball Z 2 (Simple Attack)", MACHINE_SUPPORTS_SAVE )




