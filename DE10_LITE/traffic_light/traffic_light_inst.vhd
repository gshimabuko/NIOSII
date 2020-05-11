	component traffic_light is
		port (
			clk_clk                          : in  std_logic                    := 'X'; -- clk
			hex_0_external_connection_export : out std_logic_vector(7 downto 0);        -- export
			hex_1_external_connection_export : out std_logic_vector(7 downto 0);        -- export
			hex_2_external_connection_export : out std_logic_vector(7 downto 0);        -- export
			hex_3_external_connection_export : out std_logic_vector(7 downto 0);        -- export
			hex_4_external_connection_export : out std_logic_vector(3 downto 0);        -- export
			hex_5_external_connection_export : out std_logic_vector(3 downto 0);        -- export
			led_external_connection_export   : out std_logic;                           -- export
			reset_reset_n                    : in  std_logic                    := 'X'; -- reset_n
			tl_0_external_connection_export  : out std_logic_vector(2 downto 0);        -- export
			tl_1_external_connection_export  : out std_logic_vector(2 downto 0);        -- export
			tl_2_external_connection_export  : out std_logic_vector(2 downto 0);        -- export
			tl_3_external_connection_export  : out std_logic_vector(2 downto 0)         -- export
		);
	end component traffic_light;

	u0 : component traffic_light
		port map (
			clk_clk                          => CONNECTED_TO_clk_clk,                          --                       clk.clk
			hex_0_external_connection_export => CONNECTED_TO_hex_0_external_connection_export, -- hex_0_external_connection.export
			hex_1_external_connection_export => CONNECTED_TO_hex_1_external_connection_export, -- hex_1_external_connection.export
			hex_2_external_connection_export => CONNECTED_TO_hex_2_external_connection_export, -- hex_2_external_connection.export
			hex_3_external_connection_export => CONNECTED_TO_hex_3_external_connection_export, -- hex_3_external_connection.export
			hex_4_external_connection_export => CONNECTED_TO_hex_4_external_connection_export, -- hex_4_external_connection.export
			hex_5_external_connection_export => CONNECTED_TO_hex_5_external_connection_export, -- hex_5_external_connection.export
			led_external_connection_export   => CONNECTED_TO_led_external_connection_export,   --   led_external_connection.export
			reset_reset_n                    => CONNECTED_TO_reset_reset_n,                    --                     reset.reset_n
			tl_0_external_connection_export  => CONNECTED_TO_tl_0_external_connection_export,  --  tl_0_external_connection.export
			tl_1_external_connection_export  => CONNECTED_TO_tl_1_external_connection_export,  --  tl_1_external_connection.export
			tl_2_external_connection_export  => CONNECTED_TO_tl_2_external_connection_export,  --  tl_2_external_connection.export
			tl_3_external_connection_export  => CONNECTED_TO_tl_3_external_connection_export   --  tl_3_external_connection.export
		);

