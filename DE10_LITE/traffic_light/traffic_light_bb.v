
module traffic_light (
	clk_clk,
	hex_0_external_connection_export,
	hex_1_external_connection_export,
	hex_2_external_connection_export,
	hex_3_external_connection_export,
	hex_4_external_connection_export,
	hex_5_external_connection_export,
	led_external_connection_export,
	reset_reset_n,
	tl_0_external_connection_export,
	tl_1_external_connection_export,
	tl_2_external_connection_export,
	tl_3_external_connection_export);	

	input		clk_clk;
	output	[7:0]	hex_0_external_connection_export;
	output	[7:0]	hex_1_external_connection_export;
	output	[7:0]	hex_2_external_connection_export;
	output	[7:0]	hex_3_external_connection_export;
	output	[3:0]	hex_4_external_connection_export;
	output	[3:0]	hex_5_external_connection_export;
	output		led_external_connection_export;
	input		reset_reset_n;
	output	[2:0]	tl_0_external_connection_export;
	output	[2:0]	tl_1_external_connection_export;
	output	[2:0]	tl_2_external_connection_export;
	output	[2:0]	tl_3_external_connection_export;
endmodule
