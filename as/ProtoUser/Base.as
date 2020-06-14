package com.sanguo.game.server.connectlogic.common.message.ProtoUser
{
	import laya.utils.Byte;
	public class Base
	{
		public static const PROTO:String = "ProtoUser.Base";
		public var package_root:*;
		public  var message:*;
		public var uid:int;
		public var exp:Number;
		public var level:int;
		public var acccharge:int;
		public var viplevel:int;
		public var cash:int;
		public var coin:int;
		public var firstRecharge:int;
		public var allianceId:int;
		public var barrier:Vector.<int>;
		public var lastcreateadts:int;
		public var flag:int;
		public function Base(root:*)
		{
			package_root = root;
			message = root.lookup(PROTO);
			uid = undefined;
			exp = undefined;
			level = undefined;
			acccharge = undefined;
			viplevel = undefined;
			cash = undefined;
			coin = undefined;
			firstRecharge = undefined;
			allianceId = undefined;
			barrier = new Vector.<int>();
			lastcreateadts = undefined;
			flag = undefined;
		}
		public function serialize():*
		{
			var serializeObj:Object = {};
			serializeObj.uid = this.uid;
			serializeObj.exp = this.exp;
			serializeObj.level = this.level;
			serializeObj.acccharge = this.acccharge;
			serializeObj.viplevel = this.viplevel;
			serializeObj.cash = this.cash;
			serializeObj.coin = this.coin;
			serializeObj.firstRecharge = this.firstRecharge;
			serializeObj.allianceId = this.allianceId;
			serializeObj.barrier = [];
			for(var i:int = 0;i < this.barrier.length;i++)
			{
				serializeObj.barrier.push(this.barrier[i]);
			}
			serializeObj.lastcreateadts = this.lastcreateadts;
			serializeObj.flag = this.flag;
			return serializeObj;
		}
		public function unserialize(msgObj:*):Base
		{
			uid = undefined;
			exp = undefined;
			level = undefined;
			acccharge = undefined;
			viplevel = undefined;
			cash = undefined;
			coin = undefined;
			firstRecharge = undefined;
			allianceId = undefined;
			barrier = new Vector.<int>();
			lastcreateadts = undefined;
			flag = undefined;
			this.uid = msgObj.uid;
			this.exp = msgObj.exp;
			this.level = msgObj.level;
			this.acccharge = msgObj.acccharge;
			this.viplevel = msgObj.viplevel;
			this.cash = msgObj.cash;
			this.coin = msgObj.coin;
			this.firstRecharge = msgObj.firstRecharge;
			this.allianceId = msgObj.allianceId;
			for(var i:int = 0;i < msgObj.barrier.length;i++)
			{
				this.barrier.push(msgObj.barrier[i]);
			}
			this.lastcreateadts = msgObj.lastcreateadts;
			this.flag = msgObj.flag;
			return this;
		}
		public function encode():* 
		{
			return message.encode(serialize()).finish();
		}
		public function decode(buffer:*):Base
		{
			var msg:* = message.decode(buffer);
			return unserialize(msg);
		}
	}
}