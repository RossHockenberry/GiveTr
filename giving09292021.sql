PGDMP     (                    y           giving     11.12 (Raspbian 11.12-0+deb10u1)    13.2     d           0    0    ENCODING    ENCODING        SET client_encoding = 'UTF8';
                      false            e           0    0 
   STDSTRINGS 
   STDSTRINGS     (   SET standard_conforming_strings = 'on';
                      false            f           0    0 
   SEARCHPATH 
   SEARCHPATH     8   SELECT pg_catalog.set_config('search_path', '', false);
                      false            g           1262    34764    giving    DATABASE     [   CREATE DATABASE giving WITH TEMPLATE = template0 ENCODING = 'UTF8' LOCALE = 'en_US.UTF-8';
    DROP DATABASE giving;
                pi    false            ^          0    34765    account 
   TABLE DATA           Z   COPY public.account (account_id, name, description, origin_date, total_given) FROM stdin;
    public          pi    false    196   �       `          0    34776    transaction 
   TABLE DATA           e   COPY public.transaction (trans_id, origin_date, amount, how_paid, check_number, comment) FROM stdin;
    public          pi    false    198   �       h           0    0    account_account_id_seq    SEQUENCE SET     E   SELECT pg_catalog.setval('public.account_account_id_seq', 1, false);
          public          pi    false    197            i           0    0    transaction_trans_id_seq    SEQUENCE SET     G   SELECT pg_catalog.setval('public.transaction_trans_id_seq', 1, false);
          public          pi    false    199            ^      x������ � �      `      x������ � �     